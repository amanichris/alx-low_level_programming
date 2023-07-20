#include "main.h"

/**
 * _isalpha - checks for char alphabetical letters.
 * @c: the char to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= '65' && c <= '90') || (c >= '97' && <= '122'))
	{
	return (1);
	}
	return (0);
}
