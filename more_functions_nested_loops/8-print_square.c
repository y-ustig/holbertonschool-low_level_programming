#include "main.h"
/**
 *print_square - for print the characteres n times
 *@size: n times of print the character
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < size; i++)

	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}
