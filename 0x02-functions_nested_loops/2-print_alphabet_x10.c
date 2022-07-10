#include "main.h"
/**
 * main - enty point
 * printing lowercase alphabets 10 lines.
 *
 */

void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)

_putchar(c);
_putchar('\n');
}
}
