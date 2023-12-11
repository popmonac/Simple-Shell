#include "main.h"

char **string_management(char *command)
{
	char **args = NULL;
	int i = 0;
  	char *token = NULL;


 	token = strtok(command, " ");
	if (token == NULL)
		return (NULL);
	args = (char **)malloc(sizeof(char *) * 3);
	while (token != NULL)
	{
		args[i] = strdup(token);
                if (args[i] == NULL)
                {
                        free_2d_array(args);
                        return (NULL);
                }
		token = strtok(NULL, " ");
		i++;
	}
	args[i] = NULL;
	for (i = 0; args[i] != NULL; i++)
		printf("%s\n", args[i]);
 	return (NULL);
}

void free_2d_array(char **args)
{
	int i = 0;
	if (args != NULL)
	{
		while (args[i] != NULL)
		{
			free(args[i]);
			i++;
		}
	}
}
