#include <stdio.h>

int my_strlen(const char *str)
{
    const char *s;
    printf("str: %p\n", str);
    for (s = str; *s; ++s) {
	printf("s: %p\n", s);
    }
    return(s - str);
}

int main() 
{
	char *pointer_to_array[] = { "abcd", "xyz" };

	int size_of_first_element = my_strlen(*pointer_to_array);
	printf("size: %d\n", size_of_first_element);
	printf("first element: %s\n", *pointer_to_array);
	printf("first character of first element: %c\n", *(*pointer_to_array+ 1));

	printf("second element: %s\n", *(pointer_to_array + 1));
	printf("first character of second element: %c\n", (**(pointer_to_array + 1)));

	char str[] = "abc";
	char * p = &str;
	printf("first: %p\n", p);
	printf("second: %p\n", p + 1);
	printf("first address: %p\n", &*(p+1));

	int a = 10;
	int *p2 = &a;
	printf("first: %p\n", p2);
	printf("second: %p\n", p2 + 1);

}



