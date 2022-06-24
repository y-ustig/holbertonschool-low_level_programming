#include "main.h"
/**
 *print_most_numbers - function for print numbers
 */

void print_most_numbers(void)
{
int numbers = 48;
for (numbers = 48; numbers <= 57; numbers++)
{
if (numbers == 50 || numbers == 52)
numbers++;
_putchar(numbers);
}
_putchar('\n');
}
