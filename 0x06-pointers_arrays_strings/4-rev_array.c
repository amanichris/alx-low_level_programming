#include "main.h"
#include <string.h>

/**
* reverse_array -> function that reverses the content of an array of integers.
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
