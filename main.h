#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]);
char *prompt(void);
char **string_management(char *command);
void free_2d_array(char **args);
#endif
