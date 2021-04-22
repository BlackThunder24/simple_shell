include "holberton.h"

/**
 * pEnv - print enviroment
 *
 * @name: char pointer
 *
 * Return: NULL
 */
char *pEnv(char *name)
{
char **envPtr;
char *ptr;
char *namePtr;

for (envPtr = environ; *envPtr; envPtr++)
{
for (ptr = *envPtr, namePtr = name; *ptr == *namePtr;
ptr++, namePtr++)
{
if (*ptr == '=')
break;
}
if ((*ptr == '=') && (!*namePtr))
return (ptr + 1);
}
return (NULL);
}

/**
 * *_strchr - check string for certain char
 * @s: char pointer
 * @c: char.
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}

/**
 * _strcpy - copy string
 * @dest: char
 * @src: char
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (dest);
}

/**
 * _strncpy - copia strings.
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{

char *ptr = dest;

while (*src)
{
*dest++ = *src++;
n++;
}
while (n--)
*dest++ = '\0';
return (ptr);
}
/**
 * _strcmp - compara dos strings.
 * @s1: Destiny
 * @s2: source
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
