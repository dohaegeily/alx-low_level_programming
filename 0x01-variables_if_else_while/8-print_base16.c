#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int i = 48;
int x = 'a';
while (i <= 57)
{
putchar(i);
i++;
}
while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
