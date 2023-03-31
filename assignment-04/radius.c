#include <stdio.h>

int main (int argc, char *argv[])
{
  float pi = 3.14,radius,area;
  
  printf("Insert the radius:\n");
  scanf("%f",&radius);
  
  area = pi *(radius*radius);
  
  printf("Area of the circle is:%.2fm2\n",area); 
  
  return 0;
}
