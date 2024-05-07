#include "search_algos.h"
/**
* linear_search - search through array to find int.
* @array: pointer to array
* @size: size of array
* @value: target
* Return: return value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
