UJUMP 2
COPYI I1 999
COPYI I2 999
SUBTI I1 I1 0
SUBTI I1 I1 1
COPYI I3 0
STORI I3 I2 -0
LOADI I5 I2 0
COPYI I6 10
SLETI I7 I5 I6
BNEQZ I7 13
UJUMP 47
SUBTI I1 I1 0
LOADI I8 I2 0
STORI I3 I1 0
STORI I4 I1 -1
STORI I5 I1 -2
STORI I6 I1 -3
STORI I7 I1 -4
STORI I8 I1 -5
SUBTI I1 I1 6
STORI I0 I1 0
STORI I2 I1 -1
SUBTI I1 I1 3
COPYI I2 I1
STORI I8 I1 0
SUBTI I1 I1 1
JLINK 55
LOADR R0 I1 0
LOADI I2 I1 1
LOADI I0 I1 2
ADD2I I1 I1 3
LOADI I8 I1 0
LOADI I7 I1 1
LOADI I6 I1 2
LOADI I5 I1 3
LOADI I4 I1 4
LOADI I3 I1 5
ADD2I I1 I1 5
PRNTR R0
PRNTC 10
LOADI I9 I2 0
COPYI I10 1
ADD2I I11 I9 I10
STORI I11 I2 -0
UJUMP 8
HALT
UJUMP 47
SUBTI I1 I1 3
COPYI I3 5
ADD2I I1 I2 1
STORI I3 I1 0
RETRN
RETRN
SUBTI I1 I1 0
LOADI I3 I2 0
PRNTI I3
LOADI I4 I2 0
CITOR R0 I4
ADD2I I1 I2 1
STORR R0 I1 0
RETRN
RETRN
HALT