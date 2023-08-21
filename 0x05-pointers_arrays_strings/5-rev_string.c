#include "main.h"
/**
* rev_string - reverse string
* @s: pointer
*/
void rev_string(char *s)
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
}
