#include "main.h"
/**
* puts2 - skip one character for every character being printed.
* @str: pointer
*/
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
		_putchar('\n');
}
