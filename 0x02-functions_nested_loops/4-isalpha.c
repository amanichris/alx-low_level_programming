#include "main.h"

/**
 * _isalpha - checks for char alphabetical letters.
 * @c: the char to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'));
}
