#include "monty.h"

/**
 *tokenizer- split string in to tokens
 *@lineptr: input
 *Return: str, needs to be free
 */

char **tokenizer(char *lineptr)
{
	int num = 0;
	int capacity =  25;
	char **str = malloc(capacity * sizeof(char *));
	char *delim = " \n\t\r:";

	str[num] = strtok(lineptr, delim);

	while (str[num] != NULL)
	{
		num++;
		str[num] = strtok(NULL, delim);
	}

	return (str);
}

