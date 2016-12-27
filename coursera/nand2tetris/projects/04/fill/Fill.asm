@SCREEN
D=A
@arr
M=D // save beginning of SCREEN memory address space to arr
@KBD
D=A
@SCREEN
D=D-A
@SCREENSZIE
M=D // set SCREENSZIE to the last bit of the SCREEN address space

(ENDLESSLOOP)
@i
M=0 // init i = 0
(LOOP)
    @i
    D=M
    @SCREENSZIE
    D=D-M
    @END
    D;JEQ // compare i and SCREENSIZE

    @arr
    D=M
    @i
    A=D+M
    D=A
    @R1
    M=D

    @KBD
    D=M

    @BLACK
    D;JNE

    @R1
    A=M
    M=0 // SET RAM[SCREEN+i] to 0 (white)
    @CONTINUE
    0;JMP

    (BLACK)
    @R1
    A=M
    M=-1 // SET RAM[SCREEN+i] to -1 (black)
    @CONTINUE
    0;JMP
    
    
    (CONTINUE)
    @i
    M=M+1 // increment i
    
    @LOOP
    0;JMP
(END)
    @ENDLESSLOOP
    0;JMP