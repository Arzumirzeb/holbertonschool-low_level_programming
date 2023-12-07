#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: h
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - check the code
 * @h: head
 * @idx: index
 * @n: integer
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	unsigned int count = 0, len;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	len = dlistint_len(*h);
	if (!*h && idx == 0)
	{
		*h = new;
	}
	else if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	else if (idx < len - 1)
	{
		temp = *h;
		while (idx - 1 > count)
		{
			count++;
			temp = temp->next;
		}
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
