#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
 int i, s_len;

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

for (i=0; i < n; i++)
{
    dest[i] = src[i];
}

return (dest);
}
