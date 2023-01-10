#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - arrays to prints a string
 * @size: number elements array
 * @c: char
 * Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

/* Define value with malloc */
buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)

	{
		return (NULL);
	}

	else
	{
		position = 0;
	while
		(position < size); /* while for array */
	{
	 *(buffer + position) = c;
		position++;
	}

	return (0);
	}
}
