#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l, k;
for (l = 0; l <= 9; l++)
{
for (k = l + 1; k <= 9; k++)
{
putchar(l + '0');
putchar(k + '0');
if (l < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
