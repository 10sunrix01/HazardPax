#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "setting.h" // menu and colours
#include "rps.c" // Rock, Paper, Scissors
#include "ttt_pvp.c" // tic-tac-toe PvP
#include "ttt_pvc.c" // tic-tac-toe PvC
#include "cards.c" // Highest Card Game
#include "guessing.c" // Guessing Game

#define cls system("clear");

int main(int argc, char *argv[])
{
  int ch;

  srand((unsigned int)time(0) + getpid());

  /* Using switch case for better handling */

  switch (argc)
    {
      
    case 1:
      
      cls
      
      printf("Try using [./hazardpax -help] option.\n\n");
      break;

    case 2:

      if ((strncmp(argv[1], "-help", 6) == 0) || (strncmp(argv[1], "-HELP", 6) == 0)) /* Help option */
	{
	  show_help();
	}

      else if (strncmp(argv[1], "--RPS", 6) == 0) /* Rock, Paper, Scissors Game option */
	{
	  rps_game(); 
	}
      
      else if (strncmp(argv[1], "--CARD", 7) == 0) /* Highest card game */
	{
	  info();
	}

      else if (strncmp(argv[1], "--GN", 5) == 0) /* Guessing number game */
	{
	  numbers();
	}
      
      break;
      
    case 3:

      if ((strncmp(argv[1], "--TTT", 6) == 0) && (strncmp(argv[2], "-pvp", 5) == 0)) /* option for --> PLAYER VS PLAYER */
	{
	  ttt_pvp();
	}

      else if ((strncmp(argv[1], "--TTT", 6) == 0) && (strncmp(argv[2], "-pvc", 5) == 0)) /* option for --> PLAYER VS COMPUTER */
	{
	  ttt_pvc();
	}

      break;
      
    default:
      
      cls
      
      printf("Try using [./hazardpax -help] option.\n\n");
      
      break;
      
    }
  

  return 0;
}
