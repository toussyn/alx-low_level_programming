#include <stdio.h>

/**
* * main - Prints the alphabet in lowercase, followed by a new line.
*
* Return: 1
*/
int main(void)
	{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
