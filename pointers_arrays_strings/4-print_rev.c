#include "main.h"
#include <string.h>
/**
 *print_rev - print rev
 *@s: contains the characteres strings
 */
void print_rev(char *s)
{
	int j = strlen(s);
	j = j - 1;

	for ( ; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');

}
