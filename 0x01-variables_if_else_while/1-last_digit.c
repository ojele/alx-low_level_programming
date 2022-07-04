#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*
*Return: always return 0
*/
int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d ls",n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0")
}
if (n < 6 && n !=0)
{
printf("Less than 6 not 0");
}
printf("\n");
return (0);
}
