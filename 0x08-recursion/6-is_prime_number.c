#include "main.h"

/**
 * prime_number - function that prints the prime number
 * @a: the first parameter
 * @b: the second parameter
 * Return: the prime number
 */

int prime_number(unsigned int a, unsigned int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + prime_number(a, b + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the input integer
 * Return: 1 if a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (prime_number(n, 2));
}
