#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void flipCase(){
  char message[] = "Message";
  for (char *p = message; *p; p++){
    if (isupper(*p)) *p = (char) tolower(*p);
    else if (islower(*p)) *p = (char) toupper(*p);
  }
  printf(message);
}

void checkType(){
  char * message = "Hello world\r\nG oodbye!";

  printf(message);

  for(char * p = message; *p; ++p){
    char c = *p;
    printf("%c\t", c);

    if (isalnum(c)) printf("isalnum ");
    if (isalpha(c)) printf("isalpha ");
    if (islower(c)) printf("islower ");
    if (isupper(c)) printf("isupper ");
    if (isdigit(c)) printf("isdigit ");
    if (isxdigit(c)) printf("isxdigit ");
    if (iscntrl(c)) printf("iscntrl ");
    if (isgraph(c)) printf("isgraph ");
    if (isspace(c)) printf("isspace ");
    if (isblank(c)) printf("isblank ");
    if (isprint(c)) printf("isprint ");
    if (ispunct(c)) printf("ispunct ");

    printf("\n");
  }
}

void stringToNumber() {
    double d = atof("123.123");
    int i = atoi("123");
}

void numberToString(){
  char * numbers = "12 0x123 101";
  char * next = numbers;

  int first = strtol(next, &next, 10);
  int second = strtol(next, &next, 0);
  int third = strtol(next, &next, 2);

  printf("%d %d %d", first, second, third);
}

void stringSize(){
  char * message = "Hello World!";
  printf("Size: %d\n", (int) strlen(message));
}

void compareStrings(){
  char * message = "Hello World!";

  printf("Apples %d\n", strcmp(message, "Apples"));
  printf("Oranges %d\n", strcmp(message, "Oranges"));
  printf("Hello World! %d\n", strcmp(message, "Hello World!"));

}

int main() {
  stringSize();
  compareStrings();
}
