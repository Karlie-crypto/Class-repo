#include <stdio.h>
/**
 * main - main entry
 * Description: Get the prompt from the user
 * Return: Always 0 success
 */
int main(void) 
{
int a, b;
printf(" Enter first number: ");
scanf("%d", &a);
printf(" Enter second number: ");
scanf(" %d", &b);
printf(" %d + %d = %d\n", a, b, a + b);

return (0);    
}
