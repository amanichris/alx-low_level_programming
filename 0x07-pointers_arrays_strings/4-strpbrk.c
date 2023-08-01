#include "main.h"
#include <stdio.h>

/**
 * __strpbrk -> a function that searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for in the function.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - Null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (indx = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
