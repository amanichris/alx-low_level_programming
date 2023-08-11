#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - array for prints a string
 * @b: number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
