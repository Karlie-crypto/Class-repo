#include <stdio.h>
/**
 * main - main entry
 * Description: Printing if the statement is true or false 
 * Return; Always 0 success
 */
int main(void)
{
  int a, b;
  a = 5;
  b = 10;
  if ((a > b) || (a < b))
    {
      printf("It is true\n ");
    }
  else
    {
      printf("It is false\n  ");
    }
  return (0);
  
}
