#include "main.h"

/**
 * set_bit - This sets the value of a bit to 1
 * @n: pointer of an unsigned long int
 * @index: index of the bit to set to 1
 *
 * Return: 1 if it worked, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
