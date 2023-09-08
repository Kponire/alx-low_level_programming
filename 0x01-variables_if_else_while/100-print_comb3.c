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
	int second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = 9; second_digit > first_digit; second_digit--)
		{
			putchar(48 + first_digit);
			putchar(48 + second_digit);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
