#include "main.h"
/**
 * binary_to_uint - converts binary to decimal.
 * @b: pointer
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (*b == '\0')
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		sum = (sum << 1) + (*b - '0');
		b++;
	}
	return (sum);
}
