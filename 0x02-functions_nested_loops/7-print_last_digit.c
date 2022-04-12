#include <main.h>
/**
* print_last_digit: prints the last digit of a number.
* @n: an integer
*
* Return: an integer
*/
int print_last_digit(int n)
{
	int result = n % 10;
	if (result < 0)
	{
		result *= -1;
	}
	_putchar(result + '0');
}
