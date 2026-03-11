#include <stdio.h>
#include "function_pointers.h"
#include "calc.h"
#include <stdlib.h>

/**
 * get_op_func - do the code
 * @s: int
 * Return: Nothing.
 */

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;

if (s != ops[])
{
return (NULL);
}


}