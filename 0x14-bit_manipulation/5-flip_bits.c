#include "main.h"

/**
 * flip_bits -> func that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, countbits = 0;
	unsigned long int tide;
	unsigned long int special = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		tide = special >> z;
		if (tide & 1)
			countbits++;
	}

	return (countbits);
}
