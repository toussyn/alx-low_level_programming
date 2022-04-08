#include <stdio.h>

/**
*main - Prints all single digit numbers of base 10
*starting from 0, followed by a new line.
*Without the use any variable of type char
*You can only use the putchar
*
*Return: 1
*/

int main() {
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return 0;
}
