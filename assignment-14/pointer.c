#include <stdio.h>

int main (int argc, char *argv[])
{
  int x = 8;
  int *pointer; 

  pointer = &x;

  printf("The value of our pointer is: %d\n",*pointer);
  return 0;
}
