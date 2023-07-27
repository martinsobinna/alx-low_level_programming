#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->strz == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->lenz, h->strz);

		h = h->next;
		count++;
	}

	return (count);
}
