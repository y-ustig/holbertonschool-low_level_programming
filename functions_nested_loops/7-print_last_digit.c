#include "main.h"
/**
 *print_last_digit - the function return the last number
 *@number: various number
 *Return: return the last number
 */
int print_last_digit(int number)
{
int last_number = number % 10;
if (last_number < 0)
last_number = -last_number;
_putchar(last_number + '0');
return (last_number);
}
