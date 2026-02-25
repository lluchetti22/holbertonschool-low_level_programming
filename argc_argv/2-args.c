#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: int
 * @argv: char
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void)argc;

int i;

for (i = 0; *argv[i] != '\0'; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
