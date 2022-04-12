#include "main.h"

/**
* void jack_bauer -  prints every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
* Return: void
void jack_bauer(void)
{
    int i = 0, j;
    while (i < 24)
    {
        j = 0;
        while (j < 60)
        {
            putchar((i/10)+'0');
            putchar((i%10)+'0');
            putchar(':');
            putchar((j/10)+'0');
            putchar((j%10)+'0');
            putchar('\n');
            j++;
        }
        i++;
    }
}
