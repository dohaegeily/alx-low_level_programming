#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int i = 'a';
int x = 'A';
while (i <= 'z')
{
putchar(i);
i++;
}
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
