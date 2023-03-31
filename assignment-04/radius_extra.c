#include <stdio.h>

#define PIE 3.14

int main (int argc, char *argv[])
{
  float radius,area;
  
  printf("Insert the radius:\n");
  scanf("%f",&radius);
  
  area = PIE *(radius*radius);
  
  printf("Area of the circle is:%.2fm2\n",area); 
  
  return 0;
}
