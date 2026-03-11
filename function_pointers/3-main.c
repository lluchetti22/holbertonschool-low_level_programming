#include "3-calc.h"
#include <stdio.h>

/**
 * main - do the code
 * 
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{

int a, b;
int (*f)(int, int);

/* checks to see if the number of arguments is exactly 4 */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

/* getting the operator and checking that it is correct*/
f = get_op_func(argv[2]);
if (f == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

/* convert to ints */
a = atoi(argv[1]);
b = atoi(argv[3]);

/* check if the numbers are being divided or modulo by 0*/
if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}

/* execute the operation and print results*/
printf("%d\n", f(a, b));
return (0);
}
