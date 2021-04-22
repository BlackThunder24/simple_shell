#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

#define MAX_ARGS 100
#define MAX_NAME_SIZE 1000
#define SEPARATORS " ,!?\'\"\n\t"

int main(void);
void space(char *line, char **token);
int execute(char **token, char *var2);
int validator_line(char *tok[]);
void free(int sigint);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _execvp(char *name, char *argv[]);
char *_strchr(char *s, char c);
char *pEnv(char *name);
void execArgs(char *file, char *argv[]);
char *_strncpy(char *dest, char *src, int n);
int compr_avanz(char **tok, char *var2);
int _env(char *tok[]);
int _cd(char *tok[]);
void errors(char __attribute__((unused)) **error);
extern char **environ;

#endif
