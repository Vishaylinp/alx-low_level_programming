#include "main.h"
/**
* print_rev - print the string in reverse
* @s: pointer
*/
void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
		_putchar('\n');
}
