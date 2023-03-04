#include <stdio.h>
/**
 * Main - main entry
 * Description: A program that shows a function without arguments and no return value
 * Return void
 */
//return type function name argument
void noArguments(void);
// main function containing a void data type
void main()
{
  //calling the function
   noArguments(); 
}
// function definition
void noArguments(void)
{
  //our function name and we are declaring tow variables to it, we intialized the variable to a build in function which is printf, and print f will print it out but this output will vanish after execution because this function is with no arguments and void return. No argument is a called function.
  int a = 10, b = 5, noArguments = 0;
  noArguments = a + b;
  printf("noArguments = %d\n", noArguments);
  //it goes to double check to where we call our func then goes to where we define the func then back to our prototype and goes to main for execution.
}  
  
