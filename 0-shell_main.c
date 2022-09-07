#include "shell.h"

/**
 * main - the main function that starts the shell
 *			and calls the shell_loop function
 *
 * @argc: arguement count passed to main attribute unused
 * @argv: character array passed to the main function
 *
 * Return: 1 on success
 */

int main(int argc __attribute__((unused)),
		char **argv)
{
	char *line;
	char **args;
	int cmd_type;

	(void) argv;
	signal(SIGINT, ctrl_C);

	while (1)
	{
		print(" ($) ", STDOUT_FILENO);
		line = _getline();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				break;
		}
		args = tokenize(line, DELIM);
		cmd_type = check_command(args[0]);
		shell_execute(args, cmd_type);
	}
	return (1);
}
