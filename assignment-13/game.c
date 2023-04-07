#include <stdio.h>

#define GAME_MAX 4

int main (int argc, char *argv[])
{
  float players[5][2];
  int game_number;
  float player,result;
  
  for ( game_number = 0; game_number < GAME_MAX ; game_number++) {
    
    printf("Game #%d\n",game_number+1);
    printf("Enter scoring total for Player #1:\n");
    scanf("%f",&players[0][0]);
    printf("Enter scoring total for Player #2:\n");
    scanf("%f",&players[1][0]);
    printf("Enter scoring total for Player #3:\n");
    scanf("%f",&players[2][0]);
    printf("Enter scoring total for Player #4:\n");
    scanf("%f",&players[3][0]);
    printf("Enter scoring total for Player #5:\n");
    scanf("%f",&players[4][0]);

    players[0][1]+=players[0][0];
    players[1][1]+=players[1][0];
    players[2][1]+=players[2][0];
    players[3][1]+=players[3][0];
    players[4][1]+=players[4][0];

  }

    players[0][1]=players[0][1]/GAME_MAX;
    players[1][1]=players[1][1]/GAME_MAX;
    players[2][1]=players[2][1]/GAME_MAX;
    players[3][1]=players[3][1]/GAME_MAX;
    players[4][1]=players[4][1]/GAME_MAX;
  
  for ( game_number = 0; game_number < 5; game_number++) {
  
    if (players[game_number][1]>players[game_number+1][1]) {
      
    
      player = game_number+1;
      result = players[game_number][1];
    } 
  }
  printf("Player #%.0f had the highest scoring average at %.2f points per game.\n",player,result);
  return 0;
}
