#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
  float a,b,c,x1,x2,delta;

  printf("Enter the value of variable 'A':\n");
  scanf("%f",&a);

  printf("Enter the value of variable 'B':\n");
  scanf("%f",&b);
  
  printf("Enter the value of variable 'C':\n");
  scanf("%f",&c);
  
  delta = b*b-(4*a*c);
  delta = sqrt(delta);

  x1 =  ((-b) + delta)/(2*a);
  
  x2 =  ((-b) - delta)/(2*a);

  printf("The solution using the '+' operator is: %f\n",x1);


  printf("The solution using the '-' operator is: %f\n",x2);

  
  return 0;
}
