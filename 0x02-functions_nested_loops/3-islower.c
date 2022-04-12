#include "main.h"

/**
*_islower - checks for lowercase character
* @c: c is an ascii characte
*
*Return: 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
