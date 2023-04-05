#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  float meas[10],result;
  int tries;
  char res;

  for ( tries = 0; tries < 10; tries++) {
    
  printf("Enter a test score:\n");
  scanf("%f",&meas[tries]);
  printf("Would you like to continue? Y/N \n");
  scanf(" %c",&res);
  if (!strcmp(&res,"N")) {
      break;
  }  
  
    result+=meas[tries];
  }
 
  result = result/tries;

  printf("%.2f is the average.\n",result);
  return 0;

}
