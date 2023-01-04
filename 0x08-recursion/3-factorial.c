#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to find the factorial of
 *
 * Return: if n is > 0 - the factorial of n
 *         if n is < 0 - 1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
	return (n * factorial(n - 1));
}
