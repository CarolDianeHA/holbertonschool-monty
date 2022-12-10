#include "monty.h"

/**
 * matcher - matches opcode with function
 * @str: purse of tokens
 * @lineptr: buffer to save line
 * @h: head of node
 * @fp: file stream
 * @linenum: line number
 * Return: Nothing
 */

void matcher(char **str, char *lineptr, stack_t **h, FILE *fp, unsigned int linenum)
{

	int i;
	instruction_t fmt[] =
	{
		{"push", _push},
		{NULL,NULL}
	};
	if (strcmp(str[0], "push")  == 0)
	{	if (str[1])
		linenum = atoi(str[1]);
	}
	for (i = 0; fmt[i].opcode != NULL; i++)
	{
		if (strcmp(fmt[i].opcode, str[0])  == 0)
		{
			fmt[i].f(h, linenum);
			return;
		}
	}
}

