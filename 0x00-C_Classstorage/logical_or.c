#include <stdio.h>
/**
 * main - main entry
 * Description: Print the output of the logical or operator if both operands are true
 * Returning Always 0 success
 */
int main(void)
{
  int a = 5;
  int b = 5;
  if ((a = b) || (b = a))
    {
      printf("It is true\n ");
    }
  else
    {
      printf("It is false");
    }
 return (0);
}

