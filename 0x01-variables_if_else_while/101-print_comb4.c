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
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (k > j && j > i)
				{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i !=  55 || j != 56)
						{
							putchar(',');
							putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
