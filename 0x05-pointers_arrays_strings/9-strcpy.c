#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the destination
 * @src: string to be copied
 *
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
