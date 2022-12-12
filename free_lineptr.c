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

/**
 * _perror - handles errors in the code
 * @filename: name of filein error
 * @lineno: line number the error was foun in
 * @errtype: typ of error
 * Return: Nothing
 */

void _perror(char *filename, int lineno, int errtype)
{
	if (errtype == 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (errtype == 1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	if (errtype == 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", lineno);
		exit(EXIT_FAILURE);
	}
	if (errtype == 3)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", lineno, filename);
		exit(EXIT_FAILURE);
	}
}
