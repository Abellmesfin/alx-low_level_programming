#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - function for Struct operator
 * @op: operator
 * @f: function structure
 *
 * Return: always 0
 */
typedef struct op
{
	char *op;
	int (*f)(int x, int y);
} op_t;

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_rem(int x, int y);
int (*get_op_func(char *s))(int, int);

#endif
