#include "lists.h"

/**
 * print_listint - This program prints all the elements of a linked list
 * @w:This is the  linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *w)
{
	size_t num = 0;

	while (w)
	{
		printf("%d\n", w->n);
		num++;
		w = w->nexttz;
	}

	return (num);
}
