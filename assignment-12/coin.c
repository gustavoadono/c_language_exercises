#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
  time_t t;
  int flip,n,head,tails,result;

  printf("How many times would you like to flip the coin?\n");
  scanf("%d",&flip);
  
  srand((unsigned int)time(&t));

  head = 0;
  tails = 0;

  for ( n = 0; n < flip; n++) {
  
    result = rand() % 2;
    if (result % 2 == 1) 
    {
      head++;
    }
    else
    {
      tails++;
    }
  } 
    printf("After flipping the coin %d times, the results were\n",flip);
    printf("%d head\n",head);
    printf("%d tails\n",tails);
    
  return 0;
}
