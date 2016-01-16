#include <stdio.h>
void old()
{
	char *array_of_string[] = { "Bob", "Alice" };
	printf("first address: %p\n", *array_of_string);
	char first = **array_of_string;
	printf("first value of Bob: %c\n", first);
	printf("second value of Bob: %c\n", *(*array_of_string + sizeof(char)));
	printf("last value of Bob: %c\n", *(*array_of_string + 2 * sizeof(char)));

	printf("size of array_of_string: %d\n", (int) sizeof(array_of_string));
	printf("size of first element of array_of_string: %d\n", (int) sizeof(array_of_string[0]));

	printf("first value of Alice: %c\n", *(*array_of_string + 4 * sizeof(char)));

	printf("size of *char: %d\n", (int) sizeof(char *));

	printf("array_of_string address: %p\n", array_of_string);
	printf("array_of_string address: %p\n", array_of_string + (int) sizeof(char *));
	
	printf("test address %p\n", array_of_string + 4 * sizeof(char));

	char arr[4] = { "ABC" };
	char *p = &arr;
	printf("array access: %c vs. pointer access: %c\n", arr[0], *p);
	printf("array traversal: %c vs. pointer traversal: %c\n", arr[1], *(p + sizeof(char)));

	char *arr_of_arr[] = { "ABC", "DEF" };

	char f = **arr_of_arr;
	printf("first char of first element: %c\n", f);

	char *first_element = *arr_of_arr[0];
	char *second_element = *arr_of_arr[1];

	printf("address of first element: %p\n", first_element);
	printf("address of second element: %p\n", second_element);
}

int main(int argc, char *argv[])
{
	char *array_of_string[] = { "ABC", "XYZ" };
	int size = (int) sizeof(array_of_string) / (int) sizeof(char **);
	
	printf("Size: %d\n", size);	
	printf("Pointer size: %d\n\n", (int) sizeof(*array_of_string));

	printf("First Address: %p\n", array_of_string[0]);
	printf("First Address: %p\n\n", *array_of_string);

	printf("Second Address: %p\n", array_of_string[1]);
	printf("Second Address: %p\n\n", *array_of_string + ((int) (32 * sizeof(char))));

	printf("First Character of Second String: %c\n", *array_of_string[1]);

	return 0;
}
