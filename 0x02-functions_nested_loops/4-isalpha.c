#include "main.h"

/**
 * _isalpha - functions checks for alphabetic character.
 * @c: the char to be checked
 * Return: 1 if char is letter lowercase or uppercase, 0  otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
