#include "main.h"
#include <string.h>

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	{
		 _putchar(s[i]);
	}
	_putchar('\n');
}
