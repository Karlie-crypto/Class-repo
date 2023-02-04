#include <stdio.h>
/**
 * main - entry
 * Description - Trying to print a nagative number
 * Return 0 always 
*/

int main(void)
{
    int num;
    printf("Enter num :");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Number is Nagative \n");
    }
return(0);
}