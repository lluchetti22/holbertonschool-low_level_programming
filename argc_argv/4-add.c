#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: int
 * @argv: char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i, j;
int result = 0;


if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

for (j = 0; argv[i][j] != '\0'; j++)
{

if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}

result += atoi(argv[i]);
}

printf("%d\n", result);
return (0);
}
