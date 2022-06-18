#include "main.h"
/**
 *_isalpha - print the 1 when is mayus or 0 when is lower
 *@c: this is variable of alphabet
 *Return: retorna 1 o 0 si no
 */
int _isalpha(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
