#ifndef holberton_h
#define holberton_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_ARGS 13
#define MAX_I 105

char comando[MAX_I];
char args[MAX_ARGS];

char SHELL[MAX_I];
char PATH[MAX_I];
char HOME[MAX_I];
char PWD[MAX_I];

int main(void);
void separaArgs(void);
void listaDir(void);
void comExterno(void);

#endif
