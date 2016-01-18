#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("p1: %p\n", argv);
	printf("s1: %s\n", *argv);
	char **inputs = argv + 1;
	printf("s2: %s\n", *inputs);
	return 0;
}
