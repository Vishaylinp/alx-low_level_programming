#include "main.h"
/**
* reverse_array - reverse the array.
* @a: pointer
* @n: pointer
*/
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;

	while (x < y)
	{
		int tempval = a[x];

		a[x] = a[y];
		a[y] = tempval;
		x++;
		y--;
	}
}
