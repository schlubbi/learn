#include <stdio.h>
#include <string.h>


void writeToConsole(){
  FILE *f  = stdout;
  fprintf_s(f, "Hello world!\n");
}

int writeToFile(){
  FILE *f = 0;

  errno_t result = fopen_s(&f, "C:\\Users\\schlubbi\\Desktop\\test.txt", "w");

  if (result != 0){
    char buffer[100];
    strerror_s(buffer, sizeof(buffer), result);

    printf("%s (%d)\n", buffer, result);
    return result;
  }

  fprintf_s(f, "HELLO FROM C!\n");
  fclose(f);
}

// will seg fault for larger input strings
void readFromConsole(){
  char message[10];
  scanf("%s", message);
  printf("%s", message);
}

void readFromConsoleSecurly(){
  char message[10];
  scanf_s("%s", message, sizeof(message));
  printf("%s", message);
}

int main() {
  writeToFile();
}
