#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * only using _ putchar twice
 *
 * * main - check the code
 *
 * return: void
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_puchar(num + 48);
		num++
	} while (num >= 0 && num <= 9);
	_putchar ('\n');
	return (0);
}
