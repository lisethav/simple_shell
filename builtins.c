#include "shell.h"

/**
 * built - display env
 * @comm: command
 * Return: command in position 0.
 */

char *built(char **comm)
{

	if (_strcmp(comm[0], "exit") == 0)
		exit(0);
	else if (_strcmp(comm[0], "env") == 0)
		envir();
	else if (_strcmp(comm[0], "help") == 0)
		helper();
	else if (_strcmp(comm[0], "cd") == 0)
		ch_dir(comm);
	else
	{
		check_comand(comm);
	}
	return (NULL);
}
