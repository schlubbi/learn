#include <stdio.h>

int main()
{
	int age = 10;
	int height = 72;
	int charactersPrinted = 0;

	charactersPrinted += printf("I am %d years old.\n", age);
	charactersPrinted += printf("I am %d inches tall.\n", height);

	printf("%d characters printed!\n", charactersPrinted);

	return 0;
}