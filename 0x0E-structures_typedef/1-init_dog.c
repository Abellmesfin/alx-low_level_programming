#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a type struct
 * @d: pointer to struct dog type
 * @name: char name
 * @age: float age
 * @owner: char owner
 *
 * Return: Always 0
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
