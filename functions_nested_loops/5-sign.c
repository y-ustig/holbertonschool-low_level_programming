#include "main.h"
/**
 *print_sign - print the 1 when is mayus or 0 when is lower
 *@n: this is variable of alphabet
 *Return: retorna 1 o 0 si no
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
}
return (-1);
}
