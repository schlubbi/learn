#include <stdio.h>

void interationStatements() {
  int count = 0;

  while (count < 10) {
    printf("Count: %d\n", count);
    count++;
  }

  do {
    printf("Count: %d\n", count);
    count++;
  } while (count < 10);

  for (int i = 0; i < 10; i++) {
    printf("i: %d\n", i);
  }

  for(;;) {
    printf("endless loop...");
    break;
  }
}

void selectionStatements() {
  int eggs = 1;

  if (eggs >= 2) {
    printf("yo!\n");
  } else {
    printf("NO!\n");
  }

  switch (eggs) {
    case 0: printf("no cake\n"); break;
    case 1: {
      printf("some cake\n");
      break;
    }
    default: printf("no cake for you body!\n"); break;
  }
}

int main() {
  //selectionStatements();
  interationStatements();
}
