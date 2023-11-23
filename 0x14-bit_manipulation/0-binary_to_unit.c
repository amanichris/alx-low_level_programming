#include "main.h"

/**
 * binary_to_uint -> function that converts a binary number to an unsigned int.
 * @b: pointer to a string containing 0 and 1 chars
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int n;

	n = 0;
	if (!b)
		return (0);
	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
	}
	for (z = 0; b[z] != '\0'; z++)
	{
		n <<= 1;
		if (b[z] == '1')
			n += 1;
	}
	return (n);
}
