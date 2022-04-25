#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals, an integer otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s + i) == '\0')
			break;
		i++;
	}
	return (*(s1 + i) - *(s2 + i))
}
