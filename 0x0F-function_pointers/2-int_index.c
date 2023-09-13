#include "function_pointers.h"
/**
* int_index - index
* @array: array
* @size: size of array
* @cmp: compare
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (1);
		}
	}
	return (-1);
}

