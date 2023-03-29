#include <stdio.h>

int main (int argc, char *argv[])
{
  char name[20],lastname[20];

  printf("Enter your first name:\n");
  scanf("%s",&name);

  printf("Enter your last name:\n");
  scanf("%s",&lastname);

  printf("Hello %s %s!\n",name,lastname);
  return 0;
}
