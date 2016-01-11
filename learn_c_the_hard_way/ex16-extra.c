#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person Person_create(char *name, int age, int height, int weight)
{
	struct Person who;

	who.name = strdup(name);
	who.age = age;
	who.height = height;
	who.weight = weight;

	return who;
}

void Person_print(struct Person who)
{
	printf("Name: %s\n", who.name);
	printf("\tAge: %d\n", who.age);
	printf("\tHeight: %d\n", who.height);
	printf("\tWeight: %d\n", who.weight);
}



int main(int argc, char *argv[])
{
	struct Person alice = Person_create(
				"Alice", 31, 170, 60);
	struct Person bob = Person_create(
				"Bob", 31, 178, 70);

	// print them out and where they are in memory
	Person_print(alice);

	Person_print(bob);

	// make everyone age 20 years and print them again
	alice.age += 20;
	Person_print(alice);

	bob.age += 20;
	Person_print(bob);

	free(alice.name);
	free(bob.name);

	return 0;
}
