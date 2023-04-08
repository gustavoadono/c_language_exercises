#include <stdio.h>

int main (int argc, char *argv[])
{
  int variable = 8;
  int *ptr = &variable;

  printf("The value of int variable is: %d\n",variable);
  printf("The value of the pointer to the int variable is: %d\n",ptr);
  printf("The memory address of the int variable is: %d\n",&variable);
  printf("The value held at the memory location that the pointer is pointer to is: %d\n",*ptr);

  return 0;
}
