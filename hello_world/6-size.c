#include<stdio.h>
/**
 *main imprime lo que estamos buscando
 *size tamaño
 *return vuelve the valor zero
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
char charType;
long long int longlongintType;
printf("Size of a char: %zu byte (s)\n", sizeof(charType));
printf("Size of an int: %zu byte (s)\n", sizeof(intType));
printf("Size of a long int: %zu byte (s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte (s)\n", sizeof(longlongType));
printf("Size of a float: %zu byte (s)\n", sizeof(floatType));
return (0);
}
