UJUMP 2
COPYI I1 999
COPYI I2 999
SUBTI I1 I1 0
ADD2I I1 I1 0
STORI I0 I1 0
STORI I2 I1 -1
SUBTI I1 I1 3
COPYI I2 I1
SUBTI I1 I1 1
JLINK 39
LOADI I3 I1 0
LOADI I2 I1 1
LOADI I0 I1 2
ADD2I I1 I1 3
ADD2I I1 I1 0
PRNTI I3
COPYI I4 5
STORI I3 I1 0
STORI I4 I1 -1
ADD2I I1 I1 -2
STORI I0 I1 0
STORI I2 I1 -1
SUBTI I1 I1 3
COPYI I2 I1
STORI I4 I1 0
SUBTI I1 I1 1
JLINK 44
LOADR R0 I1 0
LOADI I2 I1 1
LOADI I0 I1 2
ADD2I I1 I1 3
LOADI I3 I1 0
LOADI I4 I1 1
ADD2I I1 I1 3
PRNTR R0
HALT
UJUMP 37
SUBTI I1 I1 0
COPYI I3 5
ADD2I I1 I2 1
STORI I3 I1 0
RETRN
SUBTI I1 I1 0
COPYR R0 2.0
ADD2I I1 I2 1
STORR R0 I1 0
RETRN
HALT