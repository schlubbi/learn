#include <stdio.h>

void pointers() {
  int i = 13;
  printf("0x%p\n", &i);

  int * p = &i;
  printf("address of the thing the pointer is pointing at: 0x%p\n", p);
  printf("value of the thing the pointer is pointing at: %d", *p);
  printf("address of the pointer p: 0x%p\n", &p);
}

void arrays() {
  int numbers[] = { 1, 2, 3 };
  int otherNumbers[3] = { 1, 2 };
  int hugo[3];

  int size = sizeof(numbers) / sizeof(numbers[0]);

  for(int i = 0; i < size; i++) {
    printf("numbers: %d\n", numbers[i]);
    printf("otherNumbers: %d\n", otherNumbers[i]);
    printf("hugo: %d\n", hugo[i]);
  }
}

void pointer_and_arrays() {
  int numbers[3] = { 1, 2, 3 };
  int size = sizeof(numbers) / sizeof(numbers[0]);

  int * p = numbers;

  int a1 = *p;
  int a2 = *numbers;

  printf("a1: %d\n", a1);
  printf("a2: %d\n", a2);

  int * end = p + size;

  for(; p != end; p++){
    printf("%d\n", *p);
  }
}

int * Print(int * begin, int * end) {
  if (begin == end) return 0;

  int * largest = begin;

  for(; begin != end; ++begin){
    printf("%d\n", *begin);
    if(*begin > *largest){
      largest = begin;
    }
  }
  return largest;
}

void functions_arrays_and_pointers() {
    int numbers[5] = { 100, 1, 102, 200, 50 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Largest: %d\n", *Print(numbers, numbers + size));
}

int main() {
 pointers();
 arrays();
 pointer_and_arrays();
 functions_arrays_and_pointers();
}
