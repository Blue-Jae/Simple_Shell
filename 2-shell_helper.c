#include "shell.h"

/**
 * print - prints a string
 * @var: pointer
 * @fd: file descriptor to print to
 * Return: number of chars printed
 */

int print(char *var, int fd)
{
	return (write(fd, var, _strlen(var)));
}

/**
 * get_func - gets a function
 * @command: take command
 * Return: NULL
 */

void (*get_func(char *command))(char **)
{
	int i;

	map_func map[] = {
		{"env", env},
		{"cd", ch_dir},
		{"exit", quit}
	};

	for (i = 0; i < 3; i++)
	{
		if (_strcmp(command, map[i].cmd_name)
				== 0)
			return (map[i].func);
	}
	return (NULL);
}
