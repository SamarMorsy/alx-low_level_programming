#include "dog.h"
/**
 * print_dog - function
 * @d: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "nil");
		printf("Age: %f\n", (d->age != NULL) ? d->age : "nil");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "nil");
	}
}
