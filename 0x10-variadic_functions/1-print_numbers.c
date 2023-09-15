#include "variadic_functions.h"
/**
* print_numbers - print number set.
* @seperator: seperates text with comma
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

		if (x < n - 1 && seperator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ag);
	printf("\n");
}
