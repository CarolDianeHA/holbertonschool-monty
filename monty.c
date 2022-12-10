#include "monty.h"
/**
main - entry point
@ac: ac
@av: av
Return: 0 if success.
*/
int main(int ac, char **av)
{
	stack_t *head = NULL;
	size_t size = 0;
	char **str = NULL;
	char *lineptr = NULL;
	unsigned int linenum = 1;
	FILE *fp;
	(void)ac;

	fp = fopen(av[1], "r");
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
	fclose(fp);
	return (0);
}
