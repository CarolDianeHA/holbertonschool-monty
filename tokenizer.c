#include "monty.h"

/**
 * tokenize - tokenizes a string into an array of strings
 * @line: line to be tokenized
 * Return: purse
 */

char **tokenizer(char *line)
{
	int i;
	int bufsize = 800;

	char *delim = " \n\a\t";
	char *token;
	char **str;

	token = strtok(line, delim);

	str = malloc(sizeof(char) * bufsize);
	if (!str)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; token != NULL; i++)
	{
		str[i] = token;
		token = strtok(NULL, delim);
	}
	if ((!token && !*str) || *str[0] == '#')
	{
		free(str);
		free(token);
		return (NULL);
	}
	str[i] = NULL;
	return (str);
