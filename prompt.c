#include "main.h"


char *prompt(void)
{
	unsigned int byte_read;
	char *command;
	size_t len = 0;

	if (isatty(0))
	/* for non interactive mode*/
		write(STDOUT_FILENO, "$", 1);
	/*To read from standard input*/
	byte_read = getline(&command, &len, stdin);
	if (byte_read <= 0)
	{
		return (NULL);
	}
	/*Temporary exit*/
	if (strncmp(command, "exit", 4) == 0)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
	/*For Enter kry*/
	if (strcmp(command, "\n") == 0)
		return (NULL);
	/*To remove newline*/
	if (command[byte_read - 1] == '\n')
		command[byte_read - 1] = '\0';

	return (command);
}
