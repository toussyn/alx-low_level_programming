#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: a string
 * @src: a string
 *  * Return: a string;
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = 0;
	
	while (dest[len] != '\0')
	{
		len++;
	}

	for (i=0, j=len; src[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
	}

	return (dest);
}
