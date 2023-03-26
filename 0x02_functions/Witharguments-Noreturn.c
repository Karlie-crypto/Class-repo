#include <stdio.h>
/**
 * Main - Main  Entry
 * Description: A function with arguments with no return value
 * Return void
 */
//my fuction prototype
void Sum(float a, float b);
//main function
void main()
{
  float a, b;
  //ask the prompt from the user
  printf("Enter the first number\n Enter the second number\n");
  scanf("%f %f", &a, &b);
  //fuction calling
  Sum(a,b);
}
//function definition
void Sum(float a, float b)
{
  //since it's a void return I will use g to initialize my var
  float g = 0;
  g = a + b;
  printf("Sum = %f", g);
  //not returning nothing

}
     
