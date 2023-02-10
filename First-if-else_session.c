#include <stdio.h>
/**
 * main - main Entry
 * Description: Getting prompt from the user
 * Return: Always 0 success
*/
int main(void)
{
int num1, num2;
printf(" Enter the first number: ");
scanf(" %d", &num1);
printf(" Enter the second number: ");
scanf(" %d", &num2);

if( num1 > num2)
{
printf(" Max is : %d\n", num1);    
}
else
printf(" Max is %d\n", num2);

return (0);
}