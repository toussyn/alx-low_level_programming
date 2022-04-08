#include <stdio.h>

/**
* main - Print all the letters of the alphabet in lowercase
* except q and e followed by a new line.
*
* Return: 1
*/
int main()
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha == 'e' || alpha == 'q')
	{
	continue;
	}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
