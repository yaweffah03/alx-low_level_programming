#include "main.h"
/**
 * get_bit -This returns the value of a bit at
 * a given index.
 * @n: unsigned long int to search
 * @index: index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
