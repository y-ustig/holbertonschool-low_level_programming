#include "main.h"
/**
 *jack_bauer - the function return the last number
 *
 *Return: return the last number
 */
void jack_bauer(void)
{
int hour;
int minutes;
for (hour = 0; hour <= 23; hour++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
_putchar(' ');
}
}
}
