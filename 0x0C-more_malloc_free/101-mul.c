#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two positive numbers
 * @argc: the number of arguments in the console
 * @argv: the vector of aguments containing the string
 * Return: 0 which indicates success otherwise failure
 */

int main(int argc, char **argv)
{
	unsigned long int timestable;
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	timestable = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", timestable);
	return (0);
}
