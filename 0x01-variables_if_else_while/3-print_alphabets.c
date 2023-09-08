#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: 0 indicates success
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	return (0);
}
