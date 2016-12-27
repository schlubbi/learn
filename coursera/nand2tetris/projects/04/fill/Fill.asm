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

@KBD
D=M

@BLACK
D;JNE

@COLOR
M=0

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

    @COLOR
    D=M

    @R1
    A=M
    M=D
   
    @i
    M=M+1 // increment i
    
    @LOOP
    0;JMP
(END)
    @ENDLESSLOOP
    0;JMP

(BLACK)
    @COLOR
    M=-1
    @LOOP
    0;JMP