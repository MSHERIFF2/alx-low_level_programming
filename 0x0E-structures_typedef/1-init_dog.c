#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - function that initialize a
 * variable of type struct dog
 * @d: point to type dog
 * @name: pointer to name of the dog
 * @age: var that hold the age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: nothing
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
