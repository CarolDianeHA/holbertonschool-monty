#include "monty.h"
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

