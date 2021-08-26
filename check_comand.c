#include "shell.h"

/**
 * check_comand - validate the command and execute it
 * @comand: buf whit string
 * Return: always 0
 */

int check_comand(char **comand)
{
	pid_t id = 0;
	int status = 0;

	if (comand == NULL)
	{
		return (-1);
	}

	id = fork();
	if (id == -1)
	{
		perror("Error");
		return (-1);
	}
	if (id == 0)
	{
		if (_strncmp(comand[0], "./", 2) && _strncmp(comand[0], "/", 1))
		{
			getpath(comand);
		}
		if (execve(comand[0], comand, environ) == -1)
		{
			perror("./shell");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}

	wait(&status);

	return (0);
}

/**
 * _strncmp - Compare Amount (n) Of Characters Of Two Strings.
 * @s1: A String.
 * @s2: A String.
 * @n: Amount Of Characters To Compare.
 *
 * Return: 1 If The Strings Don't Match Otherwise 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
