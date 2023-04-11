#include "main.h"
/**
 * set_bit - sets the bit to 1 at a given index
 * @n: unsigned long to change.
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
