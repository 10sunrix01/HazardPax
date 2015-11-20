/* tic-tac-toe part for PvP */

#include "ttt_pvp.h"

void ttt_pvp(void)
{
  int ch, again;
  
  menu_ttt_pvp();
  
  player_ch();

  printf("\n");

  do
    {
      system("clear");

      count = 0;

      pos_board();
      
      empty_board();

      while (1)
	{
	  input_p1_check();

	  system("clear");

	  update_board();

	  ch = check_win();

	  if (ch == 1)
	    {
	      break;
	    }

	  input_p2_check();

	  system("clear");

	  update_board();

	  ch = check_win();

	  if (ch == 1)
	    {
	      break;
	    }
	}

      printf("Do you want to play again [1 - To end][Other number - Restart]?: ");
      scanf("%d", &again);
      
    }while (again != 1);
}

//============================================================

void menu_ttt_pvp(void)
{
  int i;
  
  system("clear");

  for (i = 1; i <= 3; i++)
    {
      sleep(1);
      printf("*****Loading*****\n");
    }
  
  printf("\n");
  
  printf("Welcome to [TIC TAC TOE] PvP !!\n\n");

}

// ============================================================

void player_ch(void)
{
  int num, ran, i;
  
  for (i = 1; i <= 2; i++)
    {
      sleep(1);
      printf("******Loading*****\n");
    }
  
  printf("\n\n");
  
  printf("TIME TO DECIDE YOUR FATE...\n\n");

  printf("Enter in a [random number] between [1 - 10]: ");
  scanf("%d", &num);
  
  if (num > 10 || num < 0)
    {
      printf("Please enter in given range![1 - 10]...\n");
      exit(0);
    }
  
  ran = (rand() % 10) + 1;

  if (ran <= num)
    {
      t1 = 'X';
      t2 = 'O';
    }

  else
    {
      t1 = 'O';
      t2 = 'X';
    }
}

// =============================================================

void pos_board(void)
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf("| %d %d |", i, j);
	}

      printf("---> Follow positions (x, y)");
      printf("\n");
    }
  
  printf("-------------------------------------------------");

  printf("\n\n\n");
}

void empty_board(void)
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  board[i][j] = ' ';

	  printf("| %c |", board[i][j]);
	}
      
      printf("\n");
    }
  
}

// ==========================================================================

void input_p1_check(void)
{
  do
    {
      printf("Enter in 2 positions (as per index) for Player 1 [%c]:\n", t1);
      scanf("%d %d", &pos1, &pos2);
      
    }while ((pos1 < 0) || (pos1 > 2) || (pos2 < 0) || (pos2 > 2));
  
  if (board[pos1][pos2] == ' ')
    {
      board[pos1][pos2] = t1;
      count++;
    }

  else
    {
      printf("This location has already been choosen! -->[%d, %d]\n\n", pos1, pos2);
      
      input_p1_check();
    }

}

// ===========================================================================

void update_board(void)
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf("| %c |", board[i][j]);
	}

      printf("\n");
    }

}

// ============================================================================

int check_win(void)
{
  /* check for player 1 */
  
  if ((board[0][0] == t1) && (board[1][0] == t1) && (board[2][0] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  else if ((board[0][1] == t1) && (board[1][1] == t1) && (board[2][1] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }
  
  else if ((board[0][2] == t1) && (board[1][2] == t1) && (board[2][2] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  else if ((board[0][0] == t1) && (board[0][1] == t1) && (board[0][2] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  else if ((board[1][0] == t1) && (board[1][1] == t1) && (board[1][2] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  else if ((board[2][0] == t1) && (board[2][1] == t1) && (board[2][2] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  else if ((board[0][0] == t1) && (board[1][1] == t1) && (board[2][2] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  else if ((board[2][0] == t1) && (board[1][1] == t1) && (board[0][2] == t1))
    {
      printf("Player[1](%c) has WON !!\n", t1);

      return 1;
    }

  /*******************************************************/
  /********** need to check also for player 2 ***********/

  if ((board[0][0] == t2) && (board[1][0] == t2) && (board[2][0] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }

  else if ((board[0][1] == t2) && (board[1][1] == t2) && (board[2][1] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }
  
  else if ((board[0][2] == t2) && (board[1][2] == t2) && (board[2][2] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }

  else if ((board[0][0] == t2) && (board[0][1] == t2) && (board[0][2] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }

  else if ((board[1][0] == t2) && (board[1][1] == t2) && (board[1][2] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);
      
      return 1;
    }

  else if ((board[2][0] == t2) && (board[2][1] == t2) && (board[2][2] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }

  else if ((board[0][0] == t2) && (board[1][1] == t2) && (board[2][2] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }

  else if ((board[2][0] == t2) && (board[1][1] == t2) && (board[0][2] == t2))
    {
      printf("Player[2](%c) has WON !!\n", t2);

      return 1;
    }

  if (count == 9)
    {
      printf("\n\nOMG.. THE BATTLE HAS COME TO A DRAW!!\n\n");

      return 1;
    }

  else
    {
      return 0;
    }

}

// ===========================================================================

void input_p2_check(void)
{
  do
    {
      printf("Enter in 2 positions (as per index) for Player 2 [%c]:\n",t2);
      scanf("%d %d", &pos1, &pos2);
      
    }while (pos1 < 0 || pos1 > 2 || pos2 < 0 || pos2 > 2);

  if (board[pos1][pos2] == ' ')
    {
      board[pos1][pos2] = t2;
      count++;
    }

  else
    {
      printf("This location has already been choosen! -->[%d, %d]\n\n", pos1, pos2);

      input_p2_check();
    }

}
