#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a node list
 * @h: node list
 *
 * Return: an unsigned int
 */
size_t print_listint(const listint_t *h)
{
	size_t nd;
	const listint_t *tmp = h;

	nd = 0;
	while(tmp != NULL)
	{
		if(tmp->next == NULL)
			printf("%d", tmp->value);
		else
			printf("%d, ", tmp->value);
		nd++;
		tmp = tmp->next;
	}
	return (nd);
}
