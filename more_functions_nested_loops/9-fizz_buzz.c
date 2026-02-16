#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

int x;

for (x = 0; x <= 100; x++)
{

if ((x % 3 && x % 5) == 0)
{
printf("FizzBuzz\n");
}
else if ((x % 3) == 0)
{
printf("Fizz\n");
}
else if ((x % 5) == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n",x);
}
}


}

