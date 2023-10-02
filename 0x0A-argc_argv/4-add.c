#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments passed in command line
 * @argv: the arguments in vector form
 * Return: 0 indicates success
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	char *arg;
	int length, number;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		length = strlen(arg);
		for (j = 0; j < length; j++)
		{
			if (isdigit(arg[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(arg);
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
