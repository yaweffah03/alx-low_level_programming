#include "main.h"

/**
 * get_endianness - this checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
