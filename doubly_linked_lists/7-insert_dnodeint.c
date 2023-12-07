#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: head
 * @idx: index
 * @n: integer
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (new)
	{
		new->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new->next = *h;
				(*h)->prev = new;
			}
			*h = new;
			return (new);
		}
	while (idx - 1 > count && temp)
	{
		temp = temp->next;
		count++;
	}
	if (temp)
		{
		if (temp->next)
		{
		temp->next->prev = new;
		}
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		return (new);
		}
	}
	return (NULL);
}
