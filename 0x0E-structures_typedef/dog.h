#ifndef MYSTRUCT_H
#define MYSTRUCT_H

/**
 * struct dog - file define element of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: Details about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
