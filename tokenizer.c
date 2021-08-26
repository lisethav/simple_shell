#include "shell.h"

/**
 * token - divides the string into words
 * @line: buff of string
 * Return: token
 */

char **token(char *line)
{
	char **token = NULL, *tok = NULL;
	int i = 0;
	int tokencount;

	if (line == NULL)
	{
		return (NULL);
	}
	tokencount = count(line);
	token = malloc(tokencount * sizeof(char *));

	if (token == NULL)
	{
		perror("./hsh");
		return (NULL);
	}
	tok = strtok(line, DELIMITS);
	for (i = 0; tok; i++)
	{
		token[i] = tok;
		tok = strtok(NULL, DELIMITS);
	}
	token[i] = NULL;
	return (token);
}
