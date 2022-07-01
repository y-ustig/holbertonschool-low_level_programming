#include "main.h"
#include <string.h>
/**
 *puts_half - main
 *@str: variable
 */

void puts_half(char *str)
{
	int j;
	int i;
	int n;

	j = strlen(str);

	if (j % 2 != 0)
	{
		i = (j - 1) / 2;
	}

	else
	{
		i = j / 2;
	}

	for (n = i; n < j; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
