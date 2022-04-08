#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
*
* Return: 1
*/
int main()
{
	char alpha;
	char alpha_big;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha_big = 'A'; alpha_big  <= 'Z'; alpha_big++)
	{
		putchar(alpha_big );
	}
	putchar('\n');

	return (0);
}
