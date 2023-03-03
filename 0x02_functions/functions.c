#include <stdio.h>

/**
 *Main - Entry point
 *Description: Print the area of a rectangle
 *Return (0) Always
 */

int area_of_rectangle(int length, int width)
{
  //Declare var
  int area;
  area = length * width;
  return area;
}

int main()
{

//Call the function name
//Data type of function name'area of rectangle'.
//a and b sets values of the function representing parameters in line 9.
//
//
  int a = 20;
  int b = 5;

  int area = area_of_rectangle(a, b);

// used to help us print the integer number
  printf("%d\n",area);
  
  a = 10;
  b = 3;

  area = area_of_rectangle(a, b);

  printf("%d\n", area);

}
