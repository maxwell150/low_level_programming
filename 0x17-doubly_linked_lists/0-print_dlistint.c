#include "lists.h"

/**
 * print_dlistint - print elements of a doubly linked list
 * @h: pointer to head of list
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;

	while (current)
	{
		printf("%i\n", current->n);
		current = current->next;
		size++;
	}
	return (size);
}
