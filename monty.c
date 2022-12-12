#include "monty.h"
/**
 * main - entry point
 * @ac: ac
 * @av: av
 * Return: 0 if success.
 */
int main(int ac, char **av)
{
	stack_t *head = NULL;
	size_t size = 0;
	char **str = NULL;
	char *lineptr = NULL;
	unsigned int linenum = 1;
	FILE *fp;
	
	if (ac != 2)
		_perror(av[0], 0, 0);
	fp = fopen(av[1], "r");
	if (!fp)
		_perror(av[1], 0, 1);
	while (getline(&lineptr, &size, fp) != -1)
	{
		str = tokenizer(lineptr);
		if (!str)
		{
			linenum++;
			continue;
		}
		matcher(str, lineptr, &head, fp, linenum);
		linenum++;

	}
	free(lineptr);
	free(head);
	fclose(fp);
	return (0);
}
