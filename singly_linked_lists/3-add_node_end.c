#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 * @head: head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last;

	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	}
	return (*head);
}
