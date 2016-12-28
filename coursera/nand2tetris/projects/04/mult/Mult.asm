// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.
@i
M=0 // init i to 0

@R2
M=0
@R3
M=0

@R0
D=M
@NEGATER0
D;JLT

@R3
M=M+D // save positive value of R0 in R3

(LOOP)
    @i
    D=M
    @R3
    D=M-D
    @RESULT
    D;JEQ // compare i and R3

    @R1
    D=M
    @R2
    M=M+D

    @i
    M=M+1 // increment i

    @LOOP
    0;JMP // next iteration

(RESULT)
    @R0
    D=M
    @END
    D;JGE
    @R2
    D=!M
    M=D+1
    @END
    0;JMP

(END)
    @END
    0;JMP

(NEGATER0)
    @R3
    D=!D
    D=D+1
    M=M+D // convert R0 to positive value and save in R3
    @LOOP
    0;JMP