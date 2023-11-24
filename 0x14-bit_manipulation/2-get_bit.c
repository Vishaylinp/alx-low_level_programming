#include "main.h"
/**
* get_bit - value of bits
* @n: number
* @index: index
* Return: 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int right = 0;
	int sum;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	right = (n >> index);
	sum = right & 1;
	return (sum);

}
