#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i, j, hn, tmp;

	j = n - 1;
	hn = n/2;

	for (i = 0; i < hn; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
