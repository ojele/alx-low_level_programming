#include <stdio.h>

int main(void)
{
	int n;
	int a[s];
	int*p;

	a[2] = 1024;
	p = &n;
	/*
* write your line of code her...
* Remember:
* - you are not allowed to us a
* - you are not allowed to modify p
* - only one statement 
* - you are not allowed to code anythig else than this line of code
*/
*(p + 5) = 98;
	/* ... so that this prints 98\n */
	printf("a[2] - %d\n", a[2]);
	return (0);
}

