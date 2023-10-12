#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own
 * @argc: the number of arguments in command line
 * @argv: the array of arguments in command line
 * Return: 0 which indicates success, 1 otherwise
 */

int main(int argc, char **argv)
{
	int i;
	int size;
	char *opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	size = atoi(argv[1]);
	opc = (char *)main;
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx\n", opc[i]);
			break;
		}
		printf("%02hhx ", opc[i]);
	}
	return (0);
}
