#include <stdio.h>
/**
 * main - entry
 * Desciption: Allocating the size of data types
 * Return: 0 Always success
*/
int main(void)
{
printf(" char size: %lu bytes\n", sizeof(char));
printf(" int size: %lu bytes\n", sizeof(int));
printf(" float size: %lu bytes\n", sizeof(float));
printf(" double size: %lu bytes\n", sizeof(double));
printf(" short size: %lu bytes\n", sizeof(short));
printf(" long size: %lu bytes\n", sizeof(long));
printf(" long double size %lu bytes\n", sizeof(long double));

return (0);
}

