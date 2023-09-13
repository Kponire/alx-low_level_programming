#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci number
 * Return: 0 which indicates success
 */

int main(void)
{
	int count = 0;
	long int a = 1;
	long int b = 2;
	long int sum;

	printf("%lu, %lu, ", a, b);

	while (count < 48)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (count != 47)
		{
			printf("%lu, ", b);
		}
		else
		{
			printf("%lu", b);
		}

		count++;
	}
	putchar('\n');
	return (0);
}
