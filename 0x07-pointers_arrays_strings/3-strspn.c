include "main.h"

/**
 * _strspn - Gets the lengths of a prefix substring.
 * @s: The string to be searched
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes which consist only
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}

			else if (accept[a + 1] == '\0')
				return (bytes);
		}
			s++;
	}

	return (bytes);
}
