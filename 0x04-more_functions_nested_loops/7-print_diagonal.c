#include "main.h"

/**
 * print_diagonal -> printing line
 *@n: integer params
 */

void print_diagonal(int n)
{
	int X, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
			for (X = 0; X < n; X++)
		{
			for (i = 0; i < X; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
