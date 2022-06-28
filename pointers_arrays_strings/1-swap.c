#include "main.h"
/**
 *swap_int - swap of int
 *@a: variable
 *@b: variable
 */

void swap_int(int *a, int *b)

{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
