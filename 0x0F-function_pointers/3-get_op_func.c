#include "3-calc.h"
#include <stdlib.h>
#include "stdef.h"
/**
 * get_op_func - main function
 * @s: function parameter
 * Return: a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	int i =0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};


	while (op[i].op) 
	{
		if (*(ops[i].op) == *s && !(*(s + 1)))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}


