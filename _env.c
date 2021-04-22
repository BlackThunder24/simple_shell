#include "holberton.h"

/**
 *_env - Variable de ambiente
 *@tok: toma el valor de la funcion token
 * Return: 0
 */

int _env(char *tok[])
{
int e;
char *s;

if (tok[1] != NULL)
{
return (-1);
}
else
{
for (e = 0; environ[e] != '\0'; e++)
{
s  = environ[e];
write(STDOUT_FILENO, s, _strlen(s));
write(STDOUT_FILENO, "\n", 1);
}
return (0);
}
return (0);
}
