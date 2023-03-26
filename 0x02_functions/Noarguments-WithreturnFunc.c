#include <stdio.h>
/**                                                                             
 * Main - Main Entry                                                            
 * Description: A function with return value without arguments passed           
 * Return: Always 0 success                                                     
 */
//function prototype                                                            
double Mysalary(void);

void main()
{
  double a;
  a = Mysalary();
  printf("Mysalary = %lf", a);
}
double Mysalary()
{
  double a = 10.00, b = 10.00;
  return a * b;
}
