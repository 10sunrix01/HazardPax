/* Tic-tac-toe part for -pvc */

#include "ttt_pvc.h"

void ttt_pvc(void)
{
  int ch, again;

  menu_ttt_pvc();
  
  player_ch1();
  
  printf("\n");

  do
    {
      system("clear");

      c = 0;

      pos_board1();
      
      empty_board1();

      while (1)
	{
	  input_p1_check1();

	  system("clear");

	  update_board1();

	  ch = check_win1();

	  if (ch == 1)
	    {
	      break;
	    }

	  input_pc_check1();
	  
	  system("clear");

	  update_board1();

	  ch = check_win1();

	  if (ch == 1)
	    {
	      break;
	    }
	}
      
      printf("Do you want to play again ?[1 - To end][Other number - Restart]: ");
      scanf("%d", &again);

    }while (again != 1);


}

// ============================================================

void menu_ttt_pvc(void)
{
  int i;

  system("clear");

  for (i = 1; i <= 3; i++)
    {
      sleep(1);
      
      printf("*****Loading*****\n");
    }
  
  printf("Welcome to the [TIC-TAC-TOE] PvC !!\n\n");
  
  sleep(2);
  
  printf("Where...MAN MEETS MACHINE!!...\n");
  
  sleep(2);

  printf("Can MAN defeat machine ?\n");

  sleep(2);
  
  printf("Or will MACHINE take control?\n\n");

}

// =============================================================

void player_ch1(void)
{
  int num, seed, i;

  for (i = 1; i <= 2; i++)
    {
      sleep(1);
      
      printf("*****Loading*****\n");
    }

  printf("\n\n");
  
  printf("TIME TO DECIDE YOUR FATE...\n\n");

  printf("Enter in a [random number] between [1 - 10]: ");
  scanf("%d", &num);

  if (num < 0 || num > 10)
    {
      printf("Enter only in given range! [1 - 10]...\n");
      exit(0);
    }

  seed = (rand() % 10) + 1;

  if (seed <= num)
    {
      n1 = 'X';
      n2 = 'O';
    }

  else
    {
      n1 = 'O';
      n2 = 'X';
    }

}

// ==========================================================

void pos_board1(void)
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

// ============================================================

void empty_board1(void)
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  board1[i][j] = ' ';

	  printf("| %c |", board1[i][j]);
	}
      
      printf("\n");
    }
  
}

// ============================================================================

void input_p1_check1(void)
{
  do
    {
      printf("Enter in 2 positions (as per index) for Player 1(%c):\n", n1);
      scanf("%d %d", &p1, &p2);
      
    }while ((p1 < 0) || (p1 > 2) || (p2 < 0) || (p2 > 2));
  
  if (board1[p1][p2] == ' ')
    {
      board1[p1][p2] = n1;
      c++;
    }

  else
    {
      printf("Positon is already taken !! --> [%d, %d]..\n", p1, p2);
      
      input_p1_check1();
    }

}

// ============================================================================

void input_pc_check1(void)
{
  int mac1 = (rand() % 3);
  int mac2 = (rand() % 3);

  if (board1[mac1][mac2] == ' ')
    {
      board1[mac1][mac2] = n2;
      c++;
    }
  
  else
    {
      input_pc_check1();
    }
}

// ===========================================================================

void update_board1(void)
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf("| %c |", board1[i][j]);
	}

      printf("\n");
    }

}

// ============================================================================

int check_win1(void)
{
  if ((board1[0][0] == n1) && (board1[1][0] == n1) && (board1[2][0] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }
  
  else if ((board1[0][1] == n1) && (board1[1][1] == n1) && (board1[2][1] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }
  
  else if ((board1[0][2] == n1) && (board1[1][2] == n1) && (board1[2][2] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }

  else if ((board1[0][0] == n1) && (board1[0][1] == n1) && (board1[0][2] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }

  else if ((board1[1][0] == n1) && (board1[1][1] == n1) && (board1[1][2] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }

  else if ((board1[2][0] == n1) && (board1[2][1] == n1) && (board1[2][2] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }

  else if ((board1[0][0] == n1) && (board1[1][1] == n1) && (board1[2][2] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }

  else if ((board1[0][2] == n1) && (board1[1][1] == n1) && (board1[2][0] == n1))
    {
      printf("Player[1](%c) has WON !!\n", n1);
      
      return 1;
    }
  
  /********************** MACHINE WINS *********************************/
  
  if ((board1[0][0] == n2) && (board1[1][0] == n2) && (board1[2][0] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }
  
  else if ((board1[0][1] == n2) && (board1[1][1] == n2) && (board1[2][1] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }
  
  else if ((board1[0][2] == n2) && (board1[1][2] == n2) && (board1[2][2] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }

  else if ((board1[0][0] == n2) && (board1[0][1] == n2) && (board1[0][2] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }

  else if ((board1[1][0] == n2) && (board1[1][1] == n2) && (board1[1][2] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }

  else if ((board1[2][0] == n2) && (board1[2][1] == n2) && (board1[2][2] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }

  else if ((board1[0][0] == n2) && (board1[1][1] == n2) && (board1[2][2] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }

  else if ((board1[0][2] == n2) && (board1[1][1] == n2) && (board1[2][0] == n2))
    {
      printf("Machine(%c) has WON !!\n", n2);
      
      return 1;
    }

  if (c == 9)
    {
      printf("\n\nMAN AND MACHINE HAS COME TO A DRAW!!!!\n\n");

      return 1;
    }

  else
    {
      return 0;
    }
  
}

// =========================================================================
