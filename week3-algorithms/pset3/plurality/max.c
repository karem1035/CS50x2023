#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  typedef struct
  {
    string name;
    int score;
  }
  player;

  int l = get_int("Many player? ");
  player players[l];

  for (int i = 0 ; i < l ; i++)
  {
    players[i].name = get_string("Player %i name: ", i + 1);
    players[i].score = get_int("Player %i score: ", i + 1);
  }


  int max = 0;
  string winner;
  for (int i = 0 ; i < l ; i++)
  {
      if(players[i].score > max)
      {
        max = players[i].score;
        winner = players[i].name;
      }
  }
  printf("%s\n",winner);

  for (int t = 0 ; t < l ; t++)
  {
      if(strcmp(players[t].name, winner) != 0 && players[t].score == max)
      {
        printf("%s\n",players[t].name);
      }
  }
}