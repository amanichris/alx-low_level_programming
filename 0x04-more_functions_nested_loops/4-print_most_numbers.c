#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 & 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int X;

	for (X = 0; X < 10; X++)

		if (X != 2 && X != 4)
			_putchar(X + '0');
	}
	_putchar('\n');
}
