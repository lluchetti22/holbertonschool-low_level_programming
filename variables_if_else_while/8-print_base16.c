#include <stdio.h>

/**
* main - print Base16
*
* Return: 0
*/

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}

for (i = 97; i <= 102; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
