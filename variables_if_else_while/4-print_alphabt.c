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
while (abc <= 'z')
{
if (!(abc == 'e' || abc == 'q'))
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
