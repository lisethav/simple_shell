#include "shell.h"

/**
 * count - count characters of string
 * @buff: buff string
 * Return: number of characters
 */

int count(char *buff)
{
	int state = 0, count = 0;

	while (*buff != '\0')
	{
		if (*buff == 32 || *buff == 10 || *buff == 9)
		{
			state = 0;
		}
		else if (state == 0)
		{
			state = 1;
			++count;
		}
		++buff;
	}
	return (count);
}
