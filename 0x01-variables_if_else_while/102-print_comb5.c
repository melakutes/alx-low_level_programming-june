#include <stdio.h>
/**
 * main - Prints 3 combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
int c, i, k, j;
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
for (k = '0'; k <= '9'; k++)
{
for (j = 48; j <= 57; j++)
{
if (((k + j) > (c + i) && k >= c) || c < k)
{
putchar(c);
putchar(i);
putchar(' ');
putchar(k);
putchar(j);
if (c + i + k + j == 227 && c == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
