#include "main.h"
#include <string.h>

/**
 * _strncat -> funciton to append some charx
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Retrun: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
