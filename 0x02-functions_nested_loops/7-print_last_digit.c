#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @n: n is an integer
*
* Return: integer
*/

int _abs(int n)
{
	int result = n % 10;

	if (result < 0)
	{
		result *= -1;
	}
	_putchar(result + '0');

}
