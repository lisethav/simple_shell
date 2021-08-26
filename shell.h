#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_

#define DELIMITS "' '\t\r\a"

/*----LIBRARIES----*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include <limits.h>

/*----PROTOTYPES----*/
int main(int argc, __attribute__((unused)) char *argv[]);
char *print_prompt(void);
int count(char *buff);
char **token(char *line);
char *built(char **comm);
int _strlen(char *string);
int _strcmp(char *s1, char *s2);
int envir(void);
int helper(void);
int ch_dir(char **command);
void signal_line(int signal);
int check_comand(char **comand);
char *_getenv(const char *name);
int getpath(char **env);
char *slash_tok(char **env, char *tok);
char *_strdup(char *str);
int _strncmp(const char *s1, const char *s2, size_t n);

extern char **environ;

#endif /*_SIMPLE_SHELL_*/
