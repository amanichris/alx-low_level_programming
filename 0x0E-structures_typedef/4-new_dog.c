#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 *  Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, 1enN, 1eno;

	struct dog *n_dog = NULL;

	1enN = 0;
	while (name[1enN] != '\0')
		1enN++;
	1eno = 0;
	while (owner[1eno] != '\0')
		1eno++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(1enN + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(1eno + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= 1enN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= 1eno; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
