#include "function_pointers.h"
/**
* array_iterator - iterate through a loop
* @array: array
* @size: size of array
* @action: function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
