#include <stdio.h>

int StringLength(char * string) {
    int length = 0;
    // make use of post increment and of falsyness of 0
    while(*string++){
      ++length;
    }
    return length;
}

int main() {
  char * string = "Hello World!";
  printf("size of pointer: %d\n", (int) sizeof(string));
  char string2[] = "Hello World!";
  printf("size of array: %d\n", (int) sizeof(string2));

  int length = 0;

  for(char * p = string2; *p != 0; ++p){
    ++length;
  }

  printf("length: %d\n", length);
  printf("StringLength: %d\n", StringLength(string));
}
