#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a calculator
 * @argc: the number of arguments in command line
 * @argv: the arrays of arguments in coomand line
 * Return: 0 which indicates success, 1 otherwise
 */

int main(int argc, char **argv)
{
	int k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') &&  (argv[2][0] != '-')
		&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	k = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", k);
	return (0);
}
