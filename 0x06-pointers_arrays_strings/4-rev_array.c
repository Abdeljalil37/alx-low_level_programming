#include "main.h"

/**
 * reverse_array - Reverses the order of elements in an integer array.
 *
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n) /* [1, 2, 3, 4, 5] == sizeof(arr) == 4 * 8 = 32 / sizeof(arr[0]) = 4 == 20 / 4 = 5 */
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}

