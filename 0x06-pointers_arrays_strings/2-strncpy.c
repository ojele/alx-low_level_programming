#include "main.h"
#include <string.h>
/**
* _strncpy -> for copying purpose
* @dest: param1
* @src: param2
* @n: param2
* Retrun: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
