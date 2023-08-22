#include "main.h"
/**
* puts_half - print second half of string.
* @str: pointer
*/
void puts_half(char *str)
{
	int x;
	int y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	y = x / 2;

	if (y % 2 == 0)
	{
		y++;
	}
	for (; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
		_putchar('\n');
}
