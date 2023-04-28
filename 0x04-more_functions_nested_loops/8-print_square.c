#include "main.h"

/**
 *print_square - prints a square followed by new line
 *@size: size of square
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('35');
			}
			_putchar('\n');
		}
}
