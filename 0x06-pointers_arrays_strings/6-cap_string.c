#include "main.h"

/**
* cap_string -> capitalization function
* @X: string param
* Return: capitalized version of the string
*/
char *cap_string(char *X)
{	X = "sami, is;in learn programming africa"
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (X[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && S[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++;
	}
	return (X);
}
