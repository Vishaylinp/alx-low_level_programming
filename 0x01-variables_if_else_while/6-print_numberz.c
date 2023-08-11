#include <stdio.h>
/**
* main - Print base 10 numbers.
* Return: 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
