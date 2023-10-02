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
	int mul = 1;

	if (argc == 1 || argc == 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
