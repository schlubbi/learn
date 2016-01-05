#include <stdio.h>

union OneThingOrAnother{
  int Integer;
  char RealNumber;
};

typedef struct {
  char RealNumber;
  int Integer;
} SeparateThings;

int main() {
  printf("int %d\n", (int) sizeof(int));
  printf("char %d\n", (int) sizeof(char));
  printf("aggregate %d\n", (int) sizeof(union OneThingOrAnother));
  printf("SeparateThings %d\n", (int) sizeof(SeparateThings));
}
