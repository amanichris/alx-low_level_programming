#include "main.h"

/**
 * get_endianness -> func that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int z;
	char *r;

	z = 1;
	r = (char *)&z;
	return (*r);
}
