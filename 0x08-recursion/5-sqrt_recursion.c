#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input parameter
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - calculates the square root
 * @a: the first parameter
 * @b: the second parameter
 * Return: the square root value
 */

int square_root(int a, int b)
{
	if (a < 0)
		return (-1);
	else if ((b * b) > a)
		return (-1);
	else if (b * b == a)
		return (b);
	return (square_root(a, b + 1));
}
