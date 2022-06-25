#include "main.h"
/**
 *print_line - function for print lines
 *@n: quanty of print lines
 */

void print_line(int n)
{
int i = 0;

while (i < n)
{
	_putchar('_');
	i++;
}
_putchar('\n');
}
