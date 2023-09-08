#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 indicates success
 */

int main(void)
{
	int digit;
	char alphabet;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
