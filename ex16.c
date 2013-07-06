#include <stdio.h>
#include <assert.h>		// a header file that defines the C preprocessor marco assert(). The macro implements an assertion, which can be used to verify as assumptions made by the program and print a diagnostic message if this assumption is false.
#include <stdlib.h>		// defines numeric conversion function, pseudo-random numbers generation function, memory allocation, process control functions
#include <string.h>		// defines string handling functions

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};		// dont' forget the `;`

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);		// `strdup` is like `malloc` and it also copies the original string into the memory it creates
	who->age = age;							// use x.y syntax to make a struct that doesn't need a pointer.
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	// make two people structures
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	// print them out and where they are in memeory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memeory location %p:\n", frank);
	Person_print(frank);

	// make everyone age 20 years and print them again
	joe->age += 20;
	joe->height -= 2;
	joe->weight +=40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	// destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}