#include "main.h"
/**
* clear_bit - clear bits
* @n: number
* @index: index
* Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitsval;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitsval = ~(1 << index);
	*n = *n & bitsval;
	return (1);

}
