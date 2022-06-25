#include "main.h"
/**
 *more_numbers - function for print numbers
 */

void more_numbers(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b < 15; b++)
{
if (b > 9)
_putchar(('0' + b / 10));
_putchar(('0' + b % 10));
}
_putchar('\n');
}
}
