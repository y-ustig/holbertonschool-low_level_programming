#include "main.h"
/**
 *times_table - print the alphabet 10x
 *
 */

void times_table(void)
{
int new_line = 0;
int number = 9;
char eat = ',';
char space = ' ';
char space_t = ' ';
int resultado;
int resultado2;
for (new_line = 0; new_line <= 9; new_line++)
{
for (number = 0; number <= 9; number++)
{
resultado = number * new_line;
if (resultado > 9)
_putchar ((resultado / 10) + '0');
_putchar((resultado % 10) + '0');
if (number <= 8)
{
_putchar(eat);
_putchar(space);
}
resultado2 = (number + 1) * new_line;

if (resultado2 <= 9 && number <= 8)
_putchar(space_t);
}
_putchar('\n');
}
}
