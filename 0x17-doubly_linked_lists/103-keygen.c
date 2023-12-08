#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int first(int len);
int second(char *name, int len);
int third(char *name, int len);
int fourth(char *name, int len);
int fifth(char *name, int len);
int sixth(char c);

/**
 * main - entry point of crackme
 * @ac: argument count
 * @av: argument vector
 * Return: always 0
 */

int main(int ac, char **av)
{
	long str[] = {
			0x3877445248432d41,
			0x42394530534e6c37,
			0x4d6e706762695432,
			0x74767a5835737956,
			0x2b554c59634a474f,
			0x71786636576a6d34,
			0x723161513346655a,
			0x6b756f494b646850
		};
	char pass[7];
	char *name = av[1];
	int len = strlen(name);
	int ret = ac;

	ret = first(len);
	pass[0] = ((char *)str)[ret];

	ret = second(name, len);
	pass[1] = ((char *)str)[ret];

	ret = third(name, len);
	pass[2] = ((char *)str)[ret];

	ret = fourth(name, len);
	pass[3] = ((char *)str)[ret];

	ret = fifth(name, len);
	pass[4] = ((char *)str)[ret];

	ret = sixth(name[0]);
	pass[5] = ((char *)str)[ret];

	pass[6] = 0;
	printf("%s", pass);
	return (0);
}

/**
 * first - function for 1st char
 * @len: length of name
 * Return: encoded char
 */

int first(int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * second - function for 2nd char
 * @name: the user name
 * @len: length of name
 * Return: encoded char
 */

int second(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
		ret += name[i];
	return ((ret ^ 0x4f) & 0x3f);
}

/**
 * third - function for 3rd char
 * @name: the user name
 * @len: length of name
 * Return: encoded char
 */

int third(char *name, int len)
{
	int ret = 1;
	int i = 0;

	for (; i < len; i++)
		ret *= name[i];
	return ((ret ^ 0x55) & 0x3f);
}

/**
 * fourth - function for 4th char
 * @name: the user name
 * @len: length of name
 * Return: encoded char
 */

int fourth(char *name, int len)
{
	int ret = name[0];
	int i = 0;

	for (; i < len; i++)
		if (name[i] > ret)
			ret = name[i];
	srand(ret ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * fifth - function for 5th char
 * @name: the user name
 * @len: length of name
 * Return: encoded char
 */

int fifth(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
		ret += name[i] * name[i];

	return ((ret ^ 0xef) & 0x3f);
}

/**
 * sixth - function for 6th char
 * @c: first char of user name
 * Return: encoded char
 */

int sixth(char c)
{
	int ret = 0;
	int i = 0;

	for (; c > i; i++)
		ret = rand();

	return ((ret ^ 0xe5) & 0x3f);
}
