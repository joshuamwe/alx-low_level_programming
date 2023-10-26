#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - main function prints all elements of listint
 * @h: parameter function 1
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);

	n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
