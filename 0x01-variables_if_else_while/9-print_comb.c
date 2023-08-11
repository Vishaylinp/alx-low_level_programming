#include <stdio.h>
/**
* main - Print 0-9 , with a comma and space.
* Return: 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
