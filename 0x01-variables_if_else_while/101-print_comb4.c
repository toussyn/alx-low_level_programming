#include <stdio.h>

/**
* main - Write a program that prints all possible
* different combinations of three digits.
*
* Return: 1
*/
int main(void)
{
int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (j > i && j < k && j != i && k != i && j != k)
				{
						putchar(i);
						putchar(j);
						putchar(k);
						putchar(',');
						putchar(' ');
						if (i == 55 && j == 56 && k == 57)
						{
							break;
						}
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
