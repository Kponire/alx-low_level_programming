#include "main.h"

/**
 * string_length - checks for the string length
 * @s: the string
 * Return: the string length
 */

int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * compare_string - a function that conpares the string if palindrome
 * @s: the checked string
 * @a: the first parameter
 * @b: the second parameter
 * Return: the number
 */

int compare_string(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare_string(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: the input string
 * Return: 1 if it is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, string_length(s) - 1));
}
