#include "holberton.h"

/**
 *_cd - Funcion
 *
 *@tok: toma el valor de la funcion token
 *Return: return(2);
 */

int _cd(char *tok[])
{
if (tok[1] == NULL)
{
errors(tok);
}
else

{
if (chdir(tok[1]) != 0)
{
errors(tok);
}
}
return (2);
}
