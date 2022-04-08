#include <stdio.h>

/**
*main - Prints all the numbers of base 16 in lowercase,
*followed by a new line.
*
*Restrictions
*You can only use the putchar function
*(every other function (printf, puts, etc…) is forbidden).
*You can only use putchar three times in your code
*
*Return: 1
*/
int main(void)
{
	char alpha;
	int a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
