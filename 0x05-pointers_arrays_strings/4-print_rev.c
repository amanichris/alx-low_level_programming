#include "main.h"
#include <string.h>

/**
 * print_rev -> a function that prints a string, in reverse
 * @str: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;
	
	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n-1; >=0; i--)
	{
	 _putchar(s[i]);
	}
	_putchar('\n');
}
