#include "shell.h"
#define _GNU_SOURCE

/* Note: The following lines have been commented out as they are not currently used.
 * char *line = NULL, *command = NULL;
 * void handle_sigint(int sig)
 */

/**
 * readline - Scans the command given by the user
 * @prog: Our program name
 * @nonactive: Flag for non-interactive mode
 * Return: The command entered by the user
 */
char *scanline(char *prog, int nonactive)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

/* Uncomment the following lines if you plan to handle the SIGINT signal
 * signal(SIGINT, handle_sigint);
 * errno = 0;
 */

    /*Read a line of input from the user*/
    /*read = getline(STDIN_FILENO, &line, &len);*/
	read = getline(&line, &len, stdin);
	if (read == -1)
	{
		if (nonactive)
		{
			free(line);
			return ("end has been !found!");
		}
		free(line);
		perror(prog);
		exit(EXIT_FAILURE);
	}
	remove_newline(line);

	return (line);
}
