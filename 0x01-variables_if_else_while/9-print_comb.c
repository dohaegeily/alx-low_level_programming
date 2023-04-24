#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int i = 48;
int x = 44;
int z = 36;
while (i <= 57)
{
putchar(i);
if (i != 57)
{
putchar(x);
putchar(' ');
}
i++;
}
putchar(z);
return (0);
}
