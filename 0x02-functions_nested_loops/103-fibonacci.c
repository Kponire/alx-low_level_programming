#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of the even-valued terms
 * Return: 0 which indicates success
 */
int main(void)
{
	long int a = 1, b = 2, sum = 0, count = 2;

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (sum % 2 == 0)
			count += sum;
	}
	printf("%d\n", count);
	return (0);
}
