#include <stdio.h>
#include "main.h"

/**
 * prints_numbers - functions that print all numbers from 0 to 9.
 *
 * Return: returns void
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
		putchar(10);
}
