#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -> cause normal process termination with a 
 * status value of 98
 * @b: number of memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
