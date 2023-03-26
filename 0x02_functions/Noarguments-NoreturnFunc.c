#include <stdio.h>
/**
* Main - Main Entry
* Description: A function without a return and no parameter arguments passed
* Return void
*/
//function prototype
void multi();

 main ()
{
//calling the function
	multi();
    
    //return 0;
}
//declaring the function
void multi()
{
//declaring my variables
    int a, b, c;
    printf("Enter two numbers \t");
    scanf("%d %d" ,&a,&b);
    c = a * b;
    printf("%d\t", c);
}
