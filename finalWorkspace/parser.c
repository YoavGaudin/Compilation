/* 046266 Compilation Methods, EE Faculty, Technion                        */
/* part2_helpers.c - Helper functions for project part 2 - implementation  */
#include <stdio.h>
#include "parser.h"

extern ParserNode *parseTree; /* Root of parse tree. Defined in the parser. */

extern int yyparse (void);

/**************************************************************************/
/*                             MAKE a node                                */
/**************************************************************************/

ParserNode *makeNode(char* type, char* value, ParserNode *child)
{
  ParserNode *p;
  //printf("makeNode %s %s with child %s\n", type, value, child!=NULL?child->type:"##");
  if ((p = (ParserNode*)(malloc(sizeof(ParserNode)))) == 0)
    fprintf(stderr, "Failed malloc(struct node)\n");
  else {
    p->type = type;
    if (value != NULL) {
      p->value = value;
    } else {
      p->value = NULL;
    }
    p->child = child;
    p->sibling = (ParserNode*)NULL;
  }
  return(p);
}


/**************************************************************************/
/*                           Concate item to list                         */
/**************************************************************************/

ParserNode *concatList(ParserNode *listHead, ParserNode *newItem)
{
  ParserNode* lastSibling;

  if (listHead == NULL) return newItem;
  lastSibling = listHead;
  while (lastSibling->sibling != (ParserNode*)NULL)
    lastSibling = lastSibling->sibling;  /* finds the last sibling in the list */
  lastSibling->sibling = newItem;  /* concate the new item to the list */
  //printf("Added %s %s to %s %s\n", newItem->type, newItem->value, listHead->type, listHead->value);
  return (listHead);
}


/**************************************************************************/
/*                    Functions to dump parse tree                        */
/**************************************************************************/

/* Helper function for dumping of parse tree. Recursively invoked. */
/* Used by dumpParseTree()                                         */
static void dumpParseSubtree(ParserNode *parentNode, int depth)
{
    ParserNode *curChild;
    char indent[(depth * 2) + 1];
    memset(indent, ' ', depth * 2); // Indentation is two spaces per depth level
    indent[depth * 2] = 0; // NULL terminate char*.

    if (parentNode == NULL) // probably reached "child" of a leaf
        return;
    printf("%s(<%s", indent, parentNode->type);
    if (parentNode->value != NULL)
        printf(",%s", parentNode->value);
    printf(">");
    // Handle children
    if (parentNode->child != NULL) {
        printf("\n");
        for (curChild = parentNode->child; curChild != NULL; curChild = curChild->sibling) {
            dumpParseSubtree(curChild, depth + 1);
        }
        printf("%s)\n", indent);
    } else { // No children - just close node parenthesis
        printf(")\n");
    }
}

/* This is the entry function to dump of parse tree. Assumes parseTree points to tree root. */
void dumpParseTree(void)
{
    if (parseTree == NULL) {
        fprintf(stderr,"*** Parse tree is empty!\n");
    } else {
        dumpParseSubtree(parseTree, 0);
    }
}

void* newTemp() {
  void* out = malloc(sizeof(void*));
  assert(out);
  return out;
}

/**************************************************************************/
/*                           Main of parser                               */
/**************************************************************************/
//#define YYDEBUG 1
//extern int yydebug;
int main(void)
{
    int rc;
#if YYDEBUG
    yydebug=1;
#endif
    rc = yyparse();
    if (rc == 0) { // Parsed successfully
        dumpParseTree();
    }
}
