#include <stdio.h>

/**
* * main - Prints the alphabet in lowercase, followed by a new line.
*
* Return: 1
*/
int main()
	{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
