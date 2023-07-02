#ifndef CALC_A
#define CALC_A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - function for Struct op
 * @op: operator
 * @f: function
 *
 * Return: Always 0
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
