#include "main.h"

/**
 * _isupper -check if c is upper
 *
 * @c: input
 *
 * Return: Always 0.
 * Retur: 1 if its uppercase. 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
        else
		 return (0);
}
