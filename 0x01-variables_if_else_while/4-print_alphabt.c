#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 * all the letters except q and e
 * Return: 0 indicates success
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');
	return (0);
}
