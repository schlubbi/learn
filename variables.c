#include <stdio.h>


#ifndef __cplusplus
typedef char bool;
#define true 1
#define false 0
#endif

void run()
{
    int apples = 6;
    int oranges = 6;

    apples += 1;
    oranges += 1;

    printf("Undefined: %d\n", apples);
    printf("Defined: %d\n", oranges);
}

int main()
{
  int apples = 4;
  int oranges = apples;

  apples = 5;

  printf("apples=%d oranges=%d\n", apples, oranges);
  while(apples > 0)
  {
    run();
    apples -= 1;
  }

  return 0;
}
