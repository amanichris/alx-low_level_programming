#include "main.h"

/**
 * _isalpha - checks for char alphabetical letters.
 * @c: the char to be checked
 * Return: returns 0 or 1 depending on condition
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z')) 
		return (1);
	else
		return (0);
}
