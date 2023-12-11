#include "main.h"

int main(int ac, char *argv[])
{
	int no_of_commands = 0;
	char *command;


	while (1)
	{
		no_of_commands++;
		/*Your dispaly function*/
		command = prompt();
		if (isatty(0) == 0)
		{
			if (command == NULL)
				exit(EXIT_SUCCESS);
		}

		if (command == NULL)
			continue;
		else
		{
			string_management(command);
			free(command);
			printf("%s,%d,%d \n", argv[0], ac, no_of_commands);
		}
	}
}
