#include "main.h"

/**
* void times_table - prints the 9 times table, starting with 0.
*
* Return: void
*/
void times_table(void)
{
int i, j, res;
for (i=0; i<10; i++)
{
 for (j=0; j<10; j++)
 {
   res=i*j;
   if (j == 0)
   {
     putchar('0');
   } else if (res < 10)
   {
     putchar(',');
     putchar(' ');
     putchar(' ');
     putchar(res + '0');
   }
   else
   {
     putchar(',');
     putchar(' ');
     putchar((res/10)+'0');
     putchar((res%10)+'0');
   }
 }
 putchar('\n');
}
}
