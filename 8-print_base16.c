#include <stdio.h>
/**
* main - Print a Hexadecimal
* Return:0
*/
int main(void)
{
	int x;
	char alp;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
