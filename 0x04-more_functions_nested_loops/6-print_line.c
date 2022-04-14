#include "main.h"

/**
 * print_line - draws a straight line
 * @n: an integer
 * Return: void
 */

void print_line(int n)
{
int i;

	for (i = 1; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
