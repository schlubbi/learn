// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.


@i
M=0 // init i to 0

@R0
D=M
@NEGATIVER0
D;JLT
@multiplicand
M=D
@R2
M=0

@SECONDREGISTER
0;JMP

(SECONDREGISTER)
    @R1
    D=M
    @NEGATIVER1
    D;JLT
    @multiplier
    M=D
    @LOOP
    0;JMP

(LOOP)
    @i
    D=M
    @multiplicand
    D=D-M
    @RESULT
    D;JEQ // compare i and R1

    @R1
    D=M
    @R2
    M=M+D

    @i
    M=M+1 // increment i

    @LOOP
    0;JMP // next iteration

(RESULT)
    @negate1
    D=M
    @negate2
    D=M-D
    @NONNEGATERESULT
    D;JEQ
    D;JLT
    @R2
    D=!M
    M=D+1
    @END
    0;JMP
    

(NONNEGATERESULT)
    @END
    0;JMP

(END)
    @END
    0;JMP

(NEGATIVER0)
    @R0
    D=!M
    @multiplicand
    M=D+1

    @negate0
    M=1
    @SECONDREGISTER
    0;JMP

(NEGATIVER1)
    @R1
    D=!M
    @multiplier
    M=D+1

    @negate1
    M=1
    @LOOP
    0;JMP