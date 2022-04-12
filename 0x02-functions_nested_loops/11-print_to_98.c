#include <stdio.h>

/**
*print_to_98 -  all natural numbers from n to 98
*@n: an integer
*Return: void
void print_to_98(int n)
{
	 if (n<=98)
	 {
	 	for (i=n; i<=98; i++)
		{
			printf("%d", i);
			if (i!=98)
			{
				printf(", ");
			}
		}
	}
	else if (n>98)
	{
		for (i=n; i>=98; i--)
		{
			printf("%d", i);
			if (i!=98)
			{
				printf(", ");
			}
		}
	}
}
