#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: the source string which is a pointer to pointer
 * @to: the pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
