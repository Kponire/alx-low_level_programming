#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments passed in command line
 * @argv: the arguments in vector form
 * Return: 0 indicates success
 */

int main(int argc, char **argv)
{
	int cents;
	int amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		amount++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", amount);
	return (0);
}
