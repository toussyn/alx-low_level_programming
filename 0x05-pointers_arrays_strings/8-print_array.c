#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
	}
		printf("\n");
}
