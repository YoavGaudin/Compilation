/* 046266 Compilation Methods, EE Faculty, Technion                        */
/* part2_helpers.h - Helper functions for project part 2 - API definitions */

#ifndef COMMON_H
#define COMMON_H
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct node {
    char * type;
    char * value;
    struct node *sibling;
    struct node *child;
} ParserNode;

ParserNode *makeNode(const char* type,const char* value, ParserNode *child);

ParserNode *concatList(ParserNode *listHead,ParserNode *newItem);

void dumpParseTree(void);

  /* DATA STRUCTURES LIST */
  
typedef struct
{
  int i;
  char c;
} alexStruct;

typedef struct
{
	
  int i;
  char c;
} yoavStruct;

  /* UNION OF DATA STRUCTURES */

typedef union
{
  alexStruct as;
  yoavStruct ys;
  ParserNode *node;
  char* str;
  int i;
  double d;
  char c;
  
} STYPE;

#define YYSTYPE ParserNode	// Tell Bison to use STYPE as the stack type

#endif

  
#ifdef __cplusplus
} // extern "C"
#endif

#endif //COMMON_H
