#include "holberton.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: number
 * @index: index to change
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (0);
}
