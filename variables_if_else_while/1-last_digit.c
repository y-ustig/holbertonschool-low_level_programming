#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - type cero
 *
 * Return: return zero
 */

int main(void)
{
int n;
int c;
srand(time(0));
n = rand() - RAND_MAX / 2;
c = n % 10;
if (c > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, c);
}
if (c == 0)
printf("last digit of %d is %d and is 0\n", n, c);
if (c < 6)
printf("last digit of %d is %d and is less than 6 and not 0\n", n, c);
return (0);
}
