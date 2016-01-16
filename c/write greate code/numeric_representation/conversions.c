#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(int binary)
{
	double index = 0;
	int res = 0;
	while(binary != 0) {
		double current = (double) (binary % 10);
		res += (int) (current * pow(2, index));
		binary /= 10;
		index++;
	}
	return res;
}

int main(int argc, char *argv[])
{
	if (argc < 2){
		printf("Usage: ./numeric <binary number>");
		exit(1);
	}
	int input = atoi(argv[1]);
	printf("%d binary = %d binary\n", input, binary_to_decimal(input));
	return 0;
}
