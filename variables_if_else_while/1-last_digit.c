#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - is it positive or negative
*
* Return: 0
*/
int main(void)
{
int n;
int lastdigit; 

srand(time(0));
n = rand() - RAND_MAX / 2;

lastdigit = n % 10;

printf("Last digit of %d is %d", n, lastdigit);

if(n > 5)
{
printf(" and is greater than 5\n");
}
else if(n == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}

return (0);
}
