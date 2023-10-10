#include "dog.h"
/**
 * init_dog - function
 * @d: dz
 * @name: xx
 * @age:sss
 * @owner: dd
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
