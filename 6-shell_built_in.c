#include "shell.h"

/**
 * env - an environ function
 * @command : pointer containng the commands
 * Returns: void
 */

void env(char **command __attribute__((unused)))
{
	int i = 0;

	while (environ[i])
	{
		print(environ[i++], STDOUT_FILENO);
		print("\n", STDOUT_FILENO);
	}
}

/**
 * quit - function to handle quit command
 * @command : pointer to the command
 * Return: void
 */

void quit(char **command)
	{
	(void) command;
}

/**
 * ch_dir - function for child directory
 * @command : pointer to the command
 * Return: void
 */

void ch_dir(char **command)
{
	(void) command;
}
