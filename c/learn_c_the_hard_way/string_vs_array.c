#include <stdio.h>

int main(int argc, char *argv[])
{
	char test[] = { 'a', 'v', 'z' };
	
	char *pointer_to_test = (char *) &test;
	char *next = pointer_to_test + sizeof(char);
	char *last = next + sizeof(char);

	printf("pointer to array dereferenced: %c\n", *test);
	printf("pointer to array dereferenced: %c\n", *next);
	printf("pointer to array dereferenced: %c\n", *last);
	
	char *str = "AVZ";
	char *next_str = str + sizeof(char);
	char *last_str = next_str + sizeof(char);

	printf("string literal dereferenced: %c\n", *str);
	printf("string literal dereferenced: %c\n", *next_str);
	printf("string literal dereferenced: %c\n", *last_str);

	return 0;
}

