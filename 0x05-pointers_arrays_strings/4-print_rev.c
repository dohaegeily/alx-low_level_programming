#include "main.h"
/**
*print_rev - imprime en reversa
*@s: string
*return: 0
*/
void print_rev(char *s)
{
int length = 0;

int l;

while (*s != '\0')
{
length++;
s++;
s--;
for (l = length; l > 0; l--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
}
