#include "main.h"
#include <string.h>
/**
 *puts2 - vamos
 *@str: whta happen
 */
void puts2(char *str)
{
	int j;
	int c;

	j = strlen(str);

	for (c = 0; c < j; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
