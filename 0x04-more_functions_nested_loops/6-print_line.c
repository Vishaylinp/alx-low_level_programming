#include "main.h"
/**
* print_line - Print lines according to n
* @n: variable
* Return: lines
*/
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
