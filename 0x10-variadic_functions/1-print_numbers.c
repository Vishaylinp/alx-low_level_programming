#include "variadic_functions.h"
/**
* print_numbers - print number set.
* @separator: seperates text with comma
* @n: number of int
* Return: numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	unsigned int print = 0;

	va_list ag;

	va_start(ag, n);

	for (x = 0; x < n; x++)
	{
		print = va_arg(ag, const unsigned int);
		printf("%d", print);

		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ag);
	printf("\n");
}
