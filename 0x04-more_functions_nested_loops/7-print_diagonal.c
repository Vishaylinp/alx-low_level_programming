#include "main.h"
/**
* print_diagonal - print diagonal
* @n: variable
* Return: 0
*/
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			  _putchar(' ');
		}
		_putchar('\\');
		if (x < (n-1))
		_putchar('\n');
	}
		
	_putchar('\n');
}
