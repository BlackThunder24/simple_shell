#include "holberton.h"

/**
 *execute - verifica si el comando recivido es real.
 *
 *@token: valor de la funcion token.
 *@var2: valor de la funcion token.
 *Return: return (1).
 */
int execute(char **token, char *var2)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
status = _execvp(token[0], token);
if (status)
{
perror("error");
free(var2);
exit(1);
}
free(var2);
exit(0);
}
else if (pid < 0)
{
perror("ERROR");
return (0);
}
else
wait(NULL);
return (0);
}
