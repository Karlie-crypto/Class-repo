//the statements will be executed first
#include <stdio.h>
/**
 * main - main entry
 * Description: Get the prompt from the user
 * Return: Always 0 success
 */
// where our program start and end
int main(void) 
{
int a, b;
// print the output
printf(" Enter first number: ");
// prompt from the user
scanf("%d", &a);
printf(" Enter second number: ");
scanf(" %d", &b);
printf(" %d + %d = %d\n", a, b, a + b);
// the end of the program execution
return (0);    
}
