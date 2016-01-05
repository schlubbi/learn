#include <stdio.h>

typedef struct {
  short first;  // xx__
  int second;   // xxxx
  short third;  // xx__
} FirstLayout;  // results in 12 bytes due to padding

typedef struct {
  short first;  // xx
  short second; // xx
  int third;    // xxxx
} SecondLayout;  // results in 8 bytes

int main() {
  printf("short %d\n", (int) sizeof(short));
  printf("int %d\n", (int) sizeof(int));
  printf("FirstLayout %d\n", (int) sizeof(FirstLayout));
  printf("SecondLayout %d\n", (int) sizeof(SecondLayout));
}
