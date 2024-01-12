#include "lists.h"

/**
 * dlistint_len -> returns the number of elements in a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lscount;

	lscount = 0;

	if (h == NULL)
		return (lscount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		lscount++;
		h = h->next;
	}

	return (lscount);
}
