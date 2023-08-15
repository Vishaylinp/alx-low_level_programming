#include "main.h"
/**
* print_last_digit - print last digit
* @x: variable
* Return: 0
*/
int print_last_digit(int x)
{	
	int y = x % 10;

	if (x < 0)
	{
		return (-y);
	}
	else
	{
		return (y);
	}
}
