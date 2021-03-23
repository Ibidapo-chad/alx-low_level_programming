#include "lists.h"

/**
 *listint_len - give the number of elements in a list.
 *@h: pointer to list.
 *
 *Return: number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
