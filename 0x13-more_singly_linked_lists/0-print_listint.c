#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Print elements of a singly linked list.
 *
 * @h: Pointer to a list.
 *
 * Return: Integer.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	size_t count = 0;

	for (tp = h; tp; tp = tp->next, count++)
		printf("%d\n", tp->n);

	return (count);
}
