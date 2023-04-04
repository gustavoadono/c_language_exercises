#include <stdio.h>

int main (int argc, char *argv[])
{
  int array[12]={0,1,2,3,4,5,6,7,8,9}; 

  printf("The array has %d elements.\n",sizeof(array)/sizeof(array[0]));
  return 0;
}
