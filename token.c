include "holberton.h"
/**
 * Space - Funcion space.
 * @line: var.
 * @token: var.
 * Return: 0.
 */
void space(char *line, char **token)
{
int conta = 0;
char *var4 = NULL;

var4 = strtok(line, SEPARATORS);
token[conta] = var4;

if (!token)
exit(1);

for (conta = 1; var4 != NULL; conta++)
{
var4 = strtok(NULL, SEPARATORS);
token[conta] = var4;
}
}
