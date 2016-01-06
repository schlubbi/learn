#include "multiply.h"
#include <stdio.h>

#define LEVEL 2

int main()
{
  #if LEVEL > 2
  multiply(4,5);
  #endif

  #if !defined(RUNFAST)
  printf("Square of 2: %d\n", SQUARE(2)) ;
  #endif
}
