#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments passed in command line
 * @argv: the arguments in vector form
 * Return: 0 indicates success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
		;
		printf("%d\n", i - 1);
	}
	return (0);
}
