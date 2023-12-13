#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <limits.h>

#define BUFF_SIZE 256

extern char **environ;
void prompt(char *dir);
char *scanline(char *prog, int nonactive);
int execute_command(char **arguments, char *prog);
char *search_command(char *command, char *prog);
ssize_t _getline(int fd, char **lineptr, size_t *n);
int _chdir(char *path, char *prog);
/*builtin functions*/
int precheck(char **arguments, char *prog);
void f_exit(char **arguments);
int _setenv(char *name, char *value, int overwrite, char *prog);
int _unsetenv(char *name, char *prog);
void _printenv(void);
/*other functions*/
void free_arguments(char **arguments);
void *_realloc(void *ptr, unsigned int new_size);

size_t _strlen(char *s);
size_t strarr_len(char **strarr);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int remove_newline(char *str);
int check_spaces(char *line);
char **_strtok(char *str, char delim);
int _strcmpold(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
int _atoi(char *s);

#endif
