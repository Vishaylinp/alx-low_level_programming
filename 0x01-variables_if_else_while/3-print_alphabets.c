#include <stdio.h>
/**
* main - Print alphabets in uppercase and lowercase.
* Return: 0
*/
int main(void)
{
	char c;
	char y;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
