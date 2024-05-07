#include "search_algos.h"
/**
* binary_search - uses a divide and conquer algo.
* @array: array of int
* @size: size of arr
* @value: value searched for
* Return: arr or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high, mid;
	int x;

	if (array == NULL)
		return (-1);

	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");

		for (x = low; x <= high; x++)
		{
			printf("%d", array[x]);
			if (x < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

			if (array[mid] > value)
				high = mid - 1;
			else if (array[mid] < value)
				low = mid + 1;
			else
				return (mid);
	}
	return (-1);
}
