#include "main.h"
#include <string.h>
/**
 *rev_string - rev the function
 *@s: the print the characteres strings
 */

void rev_string(char *s)
{
	int j;

	j = strlen(s);
	j = j - 1;

	for ( ;j >= 0; j--)
		_putchar(s[j]);
}
