#include <stdio.h>
/**
* main - print size
*
* Return: Always 0 (Success)
*/
int main(void)
{
char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;
printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
printf("Size of a long int: %zu byte(s)\n", sizeof(longinttype));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
return (0);
}
