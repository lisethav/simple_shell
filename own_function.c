#include "shell.h"

/**
 * _strlen - counts the number of characters.
 *
 * @string: pointer
 * Return: the counter
 */

int _strlen(char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcmp - compares two strings.
 * @s1: compare
 * @s2: compare
 * Return: to 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j += s1[i] - s2[i];
	return (j);
}

/**
 * _getenv - search in the envairon
 * @name: in this case PATH
 * Return: to value.
 */

char *_getenv(const char *name)
{
	unsigned int x;
	unsigned long int j = 0;
	char *value;
	int aux;

	while (name[j] != '\0')
	{
		j++;
	}

	for (x = 0; environ[x] != NULL; x++)
	{
		aux = strncmp(environ[x], name, j);
		if (aux == 0)
			break;
	}
	value = environ[x] + (j + 1);
	if (value == NULL)
	{
		return (NULL);
	}
	return (value);
}

/**
 * _strdup - function that returns a pointer to a newly allocated in memory
 *
 * @str: string
 * Return: Returns NULL if str = NULL and S
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, x = 0;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
