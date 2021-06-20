#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
for (k = '0'; k <= '9'; k++)
{
putchar(k);
}
for (k = 'a'; k <= 'f'; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
