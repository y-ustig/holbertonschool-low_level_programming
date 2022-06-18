#include "main.h"
/**
 *_islower - print the 1 when is mayus or 0 when is lower
 *@c: la cantidad
 *Return: retorna los valores
 */
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
{
return (0);
}
}
