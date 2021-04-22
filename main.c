#include "holberton.h"
/**
 * main - Funcion main.
 *
 *Return: return (0).
 */
int main(void)
{
char *token[103];
int var1;
char *var2 = NULL;
size_t var3 = 0;

while (1)
{
signal(SENAL, free);
if (isatty(STDIN_FILENO))
{
write(STDOUT_FILENO, "$Black> ", 2);
}
var1 = getline(&var2, &var3, stdin);
if (var1 == EOF)
{
free(var2);
if (isatty(STDIN_FILENO) != 0)
write(STDOUT_FILENO, "\n", 1);
return (0);
}
space(var2, token);
compr_avanz(token, var2);
}
free(var2);
return (0);
}
