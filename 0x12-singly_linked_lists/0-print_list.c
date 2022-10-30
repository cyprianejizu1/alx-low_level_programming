#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list_t list.
 *
 * Return: The number of nodes in h.
 **/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (nodes = 0; h; node++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (nodes);
}
