#include "holberton.h"

main(void){
int welcome = 1;
getcwd(PWD, MAX_I);
strcpy(PATH, getenv("PATH"));
strcpy(HOME, getenv("PATH"));
strcpy(SHELL, PWD);
do {
printf("%s:p", PWD);
__fpurge(stdin);
menset(comand, '\0', MAX_I)
scanf("%[^\n]s", comand);
if (strlen(comand) > 0)
{
separaArgs();
if (strcmp(comand, "cd") == 0)
{
if (args[1])
if (chdir(args[1] != 0))
printf("Error, %s doesn't exist", args[1])
else
getcwd(PWD, MAX_I);
}
}
} while (welcome);
return (0);
}
