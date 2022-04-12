#include <stdio.h>

/**
*print_to_98 -  all natural numbers from n to 98
*@n: an integer
*Return: void
*/
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
