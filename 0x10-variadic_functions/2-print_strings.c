#include "variadic_functions.h"
/**
* print_strings - combine strings together
* @separator: comma
* @n: number of string
* Return : void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;

	va_list ag;

	va_start(ag, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(ag, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);

		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ag);
}
