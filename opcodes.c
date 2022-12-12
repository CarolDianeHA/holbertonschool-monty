#include "monty.h"
/**
 * _push - ...
 * @stack: ...
 * @num: ...
 * Return: nothing
*/
void _push(stack_t **stack, unsigned int num)
{
	stack_t *newNode;

	newNode = malloc(sizeof(stack_t));

	if (!newNode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	newNode->next = *stack;
	newNode->prev = NULL;
	newNode->n = num;

	if (*stack)
		(*stack)->prev = newNode;
	*stack = newNode;
}
/**
 * _pall - ...
 * @h: ...
 * @linenum: ...
 * Return: nothing
*/
void _pall(stack_t **h, unsigned int linenum)
{
	stack_t *tmp = NULL;

	if (!h || !*h)
		return;

	(void) linenum;
	tmp = *h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
