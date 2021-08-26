#include "shell.h"

/**
 * print_prompt - display $ in the shell
 * Return: string
 */

char *print_prompt(void)
{
	char *prompt = "$ ";
	char *line = NULL;
	size_t lineSize = 0;
	int count_rd = 0;

	/*write $ */
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
	}
	/*read the string of characters*/
	count_rd = getline(&line, &lineSize, stdin);
	/*write line break */
	if (count_rd == EOF)
	{
		free(line);
		write(STDOUT_FILENO, "\n", count_rd);
		return (NULL);
	}
	if (count_rd > 1)
	{
		line[count_rd - 1] = '\0';
	}
	return (line);
}
