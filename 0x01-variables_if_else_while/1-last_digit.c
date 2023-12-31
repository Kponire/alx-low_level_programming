#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints the last digit of the number stored in the variable n
 * Return: 0 to indicate success
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",	n, n % 10);
	return (0);
}
