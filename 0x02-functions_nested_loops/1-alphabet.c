#include "main.h"
/**
 * A funcion that prints the alphabet, in lowercase.
**/

void print_alphabet(void)
{
	Char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
