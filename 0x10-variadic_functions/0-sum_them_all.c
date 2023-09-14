#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum all numbers
* @n: variable
* Return: total
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum_them = 0;

	va_list ar;

	va_start(ar, n);

	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		sum_them += va_arg(ar, const unsigned int);
	}
	va_end(ar);
	return (sum_them);
}
