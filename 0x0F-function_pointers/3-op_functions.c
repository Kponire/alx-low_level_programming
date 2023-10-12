#include "3-calc.h"

/**
 * op_add - function that adds two integers
 * @a: the first input integer
 * @b: the second input integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract two integers
 * @a: the first input integer
 * @b: the second input integer
 * Return: the substraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two integers
 * @a: the first input integer
 * @b: the second input integer
 * Return: the multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: the first input integer
 * @b: the second input integer
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that finds the remainder of two integers
 * @a: the first input integer
 * @b: the second input integer
 * Return: the modulus of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
