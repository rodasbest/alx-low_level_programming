#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: typdef dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int ni, i, oi;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ni = 0; name[ni]; ni++)
		;
	ni++;
	dog->name = malloc(ni * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ni; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (oi = 0; owner[oi]; oi++)
		;
	oi++;
	dog->owner = malloc(oi * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < oi; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
