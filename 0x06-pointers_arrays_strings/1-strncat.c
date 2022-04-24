#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, d_len, s_len;

	d_len = 0;

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	s_len = 0;

	while (src[s_len] != '\0')
	{
		s_len++;
	}
	
	s_len -= 1;

	if (n > s_len)
	{
		n = s_len;
	}

	for (i=0, j=d_len; i < n; i++, j++)
	{
		dest[j] = src[i];
	}

	return (dest);
}
