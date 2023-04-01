#include <stdio.h>

int main (int argc, char *argv[])
{
  int numerator,denominator;

  printf("Inform the numerator:\n");
  scanf("%d",&numerator);

  printf("Inform the denominator:\n");
  scanf("%d",&denominator);

  if(numerator % denominator != 0)
  {
    printf("There is a remainder!\n");
  }
  else
  {
    printf("There is not a remainder \n");
  }

  return 0;
}
