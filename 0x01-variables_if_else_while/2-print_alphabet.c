#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by a new line
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

	putchar('\n');
	return (0);
}
