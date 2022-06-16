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
int i;
for (i = 48; i <= 57; i++)
putchar (i);
while (abc <= 'f')
{
putchar(abc);
abc++;
}
putchar('\n');
return (0);
}
