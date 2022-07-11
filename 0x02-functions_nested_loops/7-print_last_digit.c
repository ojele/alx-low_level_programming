#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: the int to extract the last digit from
* Return: value the last digit
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}
