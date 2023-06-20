#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function for new dog
 * @name: char type for name
 * @age: float type for age
 * @owner: char type for owner
 * Return: always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(i * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	dog->owner = malloc(j * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}

