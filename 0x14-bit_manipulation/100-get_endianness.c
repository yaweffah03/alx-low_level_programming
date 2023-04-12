#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 1 for little, 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
