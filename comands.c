#include "shell.h"

/**
 * envir - display environ
 * Return: 1 when its ok
 */

int envir(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (1);
}

/**
 * helper - in process
 * Return: token
 */
int helper(void)
{
	exit(98);
}
/**
 * ch_dir - change directory
 * @command: buf whit string
 * Return: always 0
 */
int ch_dir(char **command)
{
	int value = -1;
	char cwd[PATH_MAX];

	if (command[1] == NULL)
		value = chdir(_getenv("HOME"));
	else if (_strcmp(command[1], "-") == 0 || _strcmp(command[1], "--") == 0)
	{
		value = chdir(_getenv("OLDPWD"));
	}
	if (value == -1)
	{
		perror("holi");
		return (-1);
	}
	else if (value != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}

/**
 * signal_line - signal to ctrl + c no exit
 * @signal: signal
 * Return: write
 */
void signal_line(int signal)
{
	char *promp = "\n$ ";

	if (signal == SIGINT)
	{
		write(STDOUT_FILENO, promp, strlen(promp));
	}
}
