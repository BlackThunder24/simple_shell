include "holberton.h"

int compr_avanz(char *tok[], char *var2)
{

if (tok[0] == NULL)
{
return (2);
}
else if (_strcmp("exit", tok[0]) == 0)
{
exit(2);
}
else if (_strcmp("env", tok[0]) == 0)
{
_env(tok);
}
else if (_strcmp("cd", tok[0]) == 0)
{
_cd(tok);
}
else
execute(tok, var2);
return (1);
}
