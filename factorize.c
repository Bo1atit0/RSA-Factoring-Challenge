#include "factor.h"
/**
*_factorize - prints the factors of a number
*@buffer: number to factorize
*Return: void
*/

void _factorize(char *buffer)
{
long long i;
long long j;
long long n = atoi(buffer);

for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
j = n / i;
printf("%lld = %lld * %lld\n", n, i, j);
break;
}
}
}

