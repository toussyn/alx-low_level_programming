#include <stdio.h>

/**
*main - Prints the alphabet in lowercase in reverse,
*followed by a new line.
*
*Return: 1
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
