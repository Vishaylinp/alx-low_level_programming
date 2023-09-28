#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - binary to int
* @b: pointer
* Return: int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal = decimal * 2 + (b[i] - '0');
		b++;
	}
	return (decimal);
}
