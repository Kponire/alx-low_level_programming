#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: the number of argument in the command line
 * @argv: the arguments in the vector form
 * Return: 0 indicates success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
