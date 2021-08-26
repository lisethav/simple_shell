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
