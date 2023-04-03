#include <stdio.h>

int main (int argc, char *argv[])
{
  int number,range;

  printf("Enter a number between 1 and 500:\n");
  scanf("%d",&number);

  if(number > 0 && number < 101)
  {
    range = 1;
  }
  if (number > 100 && number < 201) {
    range = 2;
  }

  if (number > 200 && number < 301) {
    range = 3;
  }

  if (number > 300 && number < 401) {
    range = 4;
  }  

  if (number > 400 && number < 501) {
    range = 5;
  }

  switch (range) {
    
    case 1:
      printf("Your number is between 1 and 100!\n");
      break;
    case 2:
      printf("Your number is between 101 and 200!\n");
      break;
    case 3:
      printf("Your number is between 201 and 300!\n");
      break;
    case 4:
      printf("Your number is between 301 and 400!\n");
      break;
    case 5:
      printf("Your number is between 401 and 500!\n");
      break;
    default:
      printf("Out of range!!\n");
      break;
  }
  return 0;
}
