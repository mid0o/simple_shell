#include "shell.h"

/**
 * remove_newline - Removes the last newline character in the string
 * @str: The main string
 * Return: The number of characters before the removal
 */
int remove_newline(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n' && str[i + 1] == '\0')
		{
			str[i] = '\0';
			return (i);
		}
	}
	/*If no newline is found at the end, return the total number of characters*/
	return (i);
}
