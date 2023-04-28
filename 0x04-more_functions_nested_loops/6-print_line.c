#include "main.h"

/**
 * main - check the code
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		-putchar('\n');

	}
}
