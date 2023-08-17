#include "3-calc.h"
/**
 * get_op_func - returns the pointer to the right op func
 * @s: string operator
 * Return: the correct func pointer
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
