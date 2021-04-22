include "holberton.h"
/**
 * free - funcion free.
 * @sigint: int
 */
void free(int sigint)
{
if (sigint == SENAL)
{
write(STDOUT_FILENO, "\n$ ", 3);
}
}
