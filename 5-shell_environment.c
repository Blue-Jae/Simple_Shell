#include "shell.h"

/**
 * _getenv - function to print the current shell environment variables
 * @path : path of the current environment variable
 * Return: list of the current environment varaibles.
 */

char *_getenv(char *path)
{
	char **my_environ = environ;
	char *pair;
	char *name;

	while (*my_environ)
	{
		for (pair = *my_environ, name = path;
				pair == name; pair++, name++)
		{
			if (*pair == '=')
				break;
		}
		if (*pair == '=' && *name == '\0')
			return (pair + 1);
	}
	return (NULL);
}
