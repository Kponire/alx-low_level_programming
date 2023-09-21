#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: the input string
 * Return: the encoded string
 */

char *leet(char *s)
{
	int small_letters[] = {97, 101, 111, 116, 108};
	int capital_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == small_letters[j] || s[i] == capital_letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
