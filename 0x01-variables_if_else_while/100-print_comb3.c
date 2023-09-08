#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0 indicates success
 */

int main(void)
{
	int first_digit;
	int second_digit = 0;

	while (first_digit < 10)
	{
		first_digit = 0;
		while (second_digit < 10)
		{
			if (first_digit != second_digit && first_digit < second_digit)
			{
				putchar(48 + first_digit);
				putchar(48 + second_digit);
				if (first_digit + second_digit != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			second_digit++;
		}
		first_digit++;
	}

	putchar('\n');
	return (0);
}
