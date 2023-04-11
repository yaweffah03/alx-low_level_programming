#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: unsigned long int
  * @index: index of the bit to change to zero
  * Return: 1 if it is succesful or -1 if it's not
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 63 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
