include "holberton.h"

/**
 * _execvp - function called
 * @name: char pointer
 * @argv: arg vector
 * ENOEXEC - exec format error
 * Return: void
 */
int _execvp(char *name, char *argv[])
{
char *path = pEnv("PATH");
char full[MAX_NAME_SIZE + 1];
char *first = NULL, *last = NULL;
int size = 0, noAccess = 0;

if (_strchr(name, '/') != 0)
{
execArgs(name, argv);
free(name);
exit(127);
}
if (!path)
path = "/home/vagrant/simple_shell";
for (first = path; ; first = last + 1)
{
for (last = first; (*last != 0) && (*last != ':'); last++)
{
}
size = last - first;
_strncpy(full, first, size);
if (last[-1] != '/')
full[size++] = '/';
_strcpy(full + size, name);
execArgs(full, argv);
if (errno == EACCES)
{
noAccess = 1;
}
else if (errno != ENOENT)
break;
if (*last == 0)
{
if (noAccess)
{
errno = EACCES;
}
break;
}
}
return (-1);
}

/**
 * execArgs - function called by
 * @file: char pointer
 * @argv: arg vector
 *
 * ENOEXEC - exec format error
 *
 * Return: void
 */
void execArgs(char *file, char *argv[])
{
int i = 0;
char *newArgv[MAX_ARGS + 1];

execve(file, argv, environ);

if (errno == ENOEXEC)
{
for (i = 0; argv[i]; i++)
{
}
if (i >= MAX_ARGS)
{
exit(EXIT_FAILURE);
}
newArgv[0] = "sh";
newArgv[1] = file;
for (i = 1; argv[i] != 0; i++)
{
newArgv[i + 1] = argv[i];
}
newArgv[i + 1] = NULL;
execve("/bin/sh", newArgv, environ);
}
}
/**
 * _strlen - counts string chars
 * @s: variable to validate
 * Return: value
 */

int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
c++;

return (c);
}
