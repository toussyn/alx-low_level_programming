#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10
* starting from 0, followed by a new line.
*
* Return: 1.
*/
int main(void)
{
	int sd = 0;

	while (sd < 10)
	{
		printf("%d", sd);
		sd++;
	}
	printf("\n");
	return 0;
}
