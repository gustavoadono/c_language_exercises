#include <stdio.h>

int main (int argc, char *argv[])
{
  float seconds,minutes,hours;

  printf("Insert the seconds value:\n");
  scanf("%f",&seconds); 
  
  hours = (int)seconds/3600;
  minutes = (int)seconds/60 - (hours * 60);
  seconds = (int)seconds - (int)((hours * 3600)+(minutes * 60)); 

  printf("Hours:%.0f\nMinutes:%.0f\nSeconds:%.0f\n",hours,minutes,seconds);

  return 0;
}
