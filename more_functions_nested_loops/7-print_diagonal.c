#include "main.h"
/**
 *print_diagonal - function for print lines
 *@n: quanty of print lines
 */

void print_diagonal(int n)
{
	int j = 0;
	int i = 0;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n < 1)
		_putchar('\n');
}
