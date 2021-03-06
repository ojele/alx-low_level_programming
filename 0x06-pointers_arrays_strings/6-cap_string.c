#include "main.h"

/**
* cap_string -> capitalization function
* @X: string param
* Return: capitalized version of the string
*/
char *cap_string(char *X)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (X[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || X[a - 1] == spc[i]) && (X[a] >= 97 && X[a] <= 122))
				X[a] = X[a] - 32;
			i++;
		}
		a++;
	}
	return (X);
}
