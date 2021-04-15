#ifndef holberton_h
#define holberton_h

/*Declaracion de librerias /
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>

#define MAX_ARGS 13
#define MAX_I 105

/Declarando variables/
char comando[MAX_I];
char args[MAX_ARGS];

/Declarando variables de ambiente/
char SHELL[MAX_I];
char PATH[MAX_I];
char HOME[MAX_I];
char PWD[MAX_I];

/Declarando cabeceras de funciones/
void separaArgs(void);
void listaDir(void);
void comExterno(void); 

#endif
