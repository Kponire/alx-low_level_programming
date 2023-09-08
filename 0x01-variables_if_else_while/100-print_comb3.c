#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0 indicates success
 */

int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;
		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar(48 + b);
				putchar(48 + a);

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			a++;
		}
		b++;
	}

	putchar('\n');
	return (0);
}
