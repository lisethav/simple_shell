#include "shell.h"

/**
 * getpath - tokenize PATH
 * @env: buff of string
 * Return: it is ok return 1
 */

int getpath(char **env)
{
	char **token = NULL, *tok = NULL, *var;
	char *path = _getenv("PATH");
	int i;
	struct stat _stat;

	tok = strtok(path, ":");
	for (i = 0; tok; i++)
	{
		var = slash_tok(env, tok);
		if (stat(var, &_stat) == 0)
		{
			*env = strdup(var);
			free(var);
			free(path);
			return (0);
		}
		free(var);
		tok = strtok(NULL, ":");
	}
	free(var);
	free(path);
	(void)token;
	return (1);
}

/**
 * slash_tok - concatena and create buf
 * @env: buff of string
 * @tok: buff with path without :
 * Return: buf
 */

char *slash_tok(char **env, char *tok)
{
	char *buf = NULL;
	size_t long_env;

	long_env = _strlen(tok) + _strlen(*env) + 2;

	buf = malloc(long_env * sizeof(char));
	if (buf == NULL)
	{
		return (NULL);
	}
	memset(buf, 0, long_env);
	buf = strcat(buf, tok);
	buf = strcat(buf, "/");
	buf = strcat(buf, *environ);

	return (buf);
}
