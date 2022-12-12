#include "monty.h"

/**
 * free_lineptr - frees all nodes
 * @head: head of list
 */
void free_lineptr(stack_t **head)
{
	if (!head)
		return;

	while (*head && (*head)->next)
	{
		*head = (*head)->next;
		free((*head)->prev);
	}
	free(*head);
}
