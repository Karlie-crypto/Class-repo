#include <stdio.h>
/**
 * main - main entry
 * Description: To see if both statements are true
 * Return: Always 0 sucess
 */
int main(void)
{
  int a = 100, b = 400;
  if (a < b && a != b)
    {
      printf("It is true ");
    }
  else
    {
      printf("It is false ");
    }

  return (0);
}

