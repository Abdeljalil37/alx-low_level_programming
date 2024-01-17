#include "search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: input array.
 * @value: value to search for.
 * @size: size of the given array.
 * Return: value if exists in array otherwise -1.
*/
int jump_search(int *array, size_t size, int value)
{
	int first = 0, step = sqrt(size), i;
	int len = (int)size;

	if (!array || size == 0)
		return (-1);

	for (i = first; i <= len; i = first)
	{
		if (array[first] != value)
			printf("Value checked array[%d] = [%d]\n", first, array[first]);

		if (value >= array[first] && value <= array[first + step])
		{
			printf("Value found between indexes [%d] and [%d]\n",
			first, (first + step));

			for (i = first; i < len; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);

				if (array[i] == value)
					return (i);
			}
		}
		else if (value >= array[first] && i >= len - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", first, 0);
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		first = first + step;
	}
	return (-1);
}
