#include <stdio.h>
/**
 * main - main entry
 * Description: 
 * Return: Always 0 success
 */
int main(void)
{
  int a, b;
  a = 5;
  b = 10;
  if ((a < b)  && (!(a > b)))
    {
      printf("It is true\n ");
    }
  else
    {
      printf("It is false\n ");
    }
    
    return (0);
}
