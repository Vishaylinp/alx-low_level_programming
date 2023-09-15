#include "variadic_functions.h"
/**
* sum_them_all - sum all numbers
* @n: variable
* Return: total
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum_them = 0;
	int y = 0;

	va_list ar;

	va_start(ar, n);

	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			y = va_arg(ar, int);
			sum_them += y;
		}
	}
	va_end(ar);
	return (sum_them);
}
