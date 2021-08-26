#include "shell.h"

/**
 * main - simple shell
 * @argc: number of args
 * @argv: __attribute__((unused))
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	char *buf = NULL, **arg = NULL;
	(void)argc;

	while (1)
	{
		signal(SIGINT, signal_line);
		buf = print_prompt();
		arg = token(buf);
		if (arg == NULL)
		{
			free(arg);
			return (0);
		}
		buf = built(arg);

		free(arg);
		free(buf);
		arg = NULL;
	}
	return (0);
}
