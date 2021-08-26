#include "shell.h"

/**
 * built - display env
 * @comm: command
 * Return: command in position 0.
 */

char *built(char **comm)
{
	if (comm[0] == NULL)
	return(0);
	if (_strcmp(comm[0], "exit") == 0)
		exit(0);
	else if (_strcmp(comm[0], "env") == 0)
		envir();
	else
	{
		check_comand(comm);
	}
	return (NULL);
}
