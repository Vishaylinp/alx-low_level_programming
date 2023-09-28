#include "main.h"
/**
* print_binary - print binary numbers
* @n: value
* Return: binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int x, y = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (x = 63; x >= 0; x--)
	{
		bit = n >> x;
		if (bit & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y > 0)
			_putchar('0');
	}
}


