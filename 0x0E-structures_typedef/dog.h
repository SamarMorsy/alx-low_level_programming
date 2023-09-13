#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: 1
 * @age: 2
 * @owner:3
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
