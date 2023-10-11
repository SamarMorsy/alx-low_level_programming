#include "dog.h"
/**
 * print_dog - function
 * @d: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		struct dog *p = d;
		string s = "nil";

		printf("Name: %s\n", (p->name != NULL) ? p->name);
		printf("Age: %f\n", (p->age != NULL) ? p->age : s);
		printf("Owner: %s\n", (p->owner != NULL) ? p->owner : s);
	}
}
