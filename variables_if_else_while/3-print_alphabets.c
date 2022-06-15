#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print the vocabulario
 *
 *Return: return zero
 */

int main(void)
{
int abc = 'a';
int ABC = 'A';
while (abc <= 'z')
{
putchar(abc);
abc++;
}
while (ABC <= 'Z')
{
putchar(ABC);
ABC++;
}
putchar('\n');
return (0);
}
