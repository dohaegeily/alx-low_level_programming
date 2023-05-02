#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int a, t, length;

length = 0;

for (a = 0; str[a] != '\0'; a++)
length++;

t = (length / 2);

if ((length % 2) == 1)
t = ((length + 1) / 2);

for (a = t; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}

