#include <stdio.h>

void MinMax(int * begin, int * end, int ** smallest, int ** largest) {
  if (begin == end) {
    *smallest = 0;
    *largest = 0;
  } else {
    *smallest = *largest = begin;

    while (++begin != end){
      if (*begin < **smallest){
        *smallest = begin;
      }

      if (*begin > **largest){
        *largest = begin;
      }
    }
  }
}

int main() {
  int value = 123;
  int * p = &value;
  int ** pp = &p;

  int values [] = { 5, 4, 12, 4, 0, -1 };
  int size = sizeof(values) / sizeof(values[0]);

  int * smallest = 0;
  int * largest = 0;

  MinMax(values, values + size, &smallest, &largest);

  printf("min: %d max: %d\n", *smallest, *largest);
}
