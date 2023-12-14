#include "shell.h"

/**
 * prompt - display prompt to stdout
 *@dir: A string representing the current directory
 * Return: No return
 */

void prompt(char *dir)
{
	char *message = "$ ";

	/*If a directory is provided, display it*/
	if (dir)
	{
		write(STDOUT_FILENO, dir, _strlen(dir));
	}
	/*Display the prompt symbol*/
	write(STDOUT_FILENO, message, _strlen(message));
}
