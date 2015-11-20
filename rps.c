void rps_game(void)
{
  int i, mac, hum, com, again, digit;
  char choice;
  
  system("clear");
  
  printf("******** [Rock][Paper][Scissors] GAME! ********\n\n");
  
  for (i = 1; i <= 3; i++)
    {
      sleep(1);
      printf("***Loading***\n");
    }
  
  printf("\n");
  
  printf("It's a MAN vs MACHINE StandOff!...\n\n");
  
  printf("---> Game best of [3]:\n");
  
  /* Game loop */

  while (1)
    {
      com = hum = 0;
      
      while ((hum < 3) && (com < 3))
	{ 
	  printf("SCORE --> [HUMAN: %d | COMPUTER: %d]\n\n", hum, com);
	  
	  printf("Enter in choice ---->[(r) - Rock][(p) - Paper][(s) - Scissors]: ");
	  scanf(" %c", &choice);
	  
	  /* Computer picks [1 - rock][2 - paper][3 - scissors] */
	  
	  printf("\n");
	  
	  mac = rand() % 3 + 1;
	  
	  if ((choice == 'r') && (mac == 2))
	    {
	      printf("(Computer chose) --> [PAPER]|[ROCK] <-- (Player chose)\n\n");

	      printf("Machine WINS!\n\n");
	      printf("********************************\n\n");
	  
	      com++;
	    }
      
	  else if ((choice == 'r') && (mac == 3))
	    {
	      printf("(Computer chose) --> [SCISSORS]|[ROCK] <-- (Player chose)\n\n");
	      
	      printf("Human WINS!\n\n");
	      printf("********************************\n\n");
	      
	      hum++;
	    }

	  else if ((choice == 'r') && (mac == 1))
	    {
	      printf("(Computer chose) --> [ROCK]|[ROCK] <-- (Player chose)\n\n");
	      
	      printf("It's a TIE!\n\n");
	      printf("********************************\n\n");
	    }
	  
	  else if ((choice == 'p') && (mac == 1))
	    {
	      printf("(Computer chose) --> [ROCK]|[PAPER] <-- (Player chose)\n\n");
	      
	      printf("Human WINS!\n\n");
	      printf("********************************\n\n");

	      hum++;
	    }
	  
	  else if ((choice == 'p') && (mac == 2))
	    {
	      printf("(Computer chose) --> [PAPER]|[PAPER] <-- (Player chose)\n");
	  
	      printf("It's a TIE!\n\n");
	      printf("********************************\n\n");
	    }
	  
	  else if ((choice == 'p') && (mac == 3))
	    {
	      printf("(Computer chose) --> [SCISSORS]|[PAPER] <-- (Player chose)\n");
	      
	      printf("Machine WINS!\n\n");
	      printf("********************************\n\n");
	      
	      com++;
	    }

	  else if ((choice == 's') && (mac == 1))
	    {
	      printf("(Computer chose) --> [SCISSORS]|[PAPER] <-- (Player chose)\n");
	      
	      printf("Machine WINS!\n\n");
	      printf("********************************\n\n");
	      
	      com++;
	    }
      
	  else if ((choice == 's') && (mac == 2))
	    {
	      printf("(Computer chose) --> [PAPER]|[SCISSORS] <-- (Player chose)\n");
	      
	      printf("Human WINS!\n\n");
	      printf("********************************\n\n");
	     
	      hum++;
	    }
	  
	  else if ((choice == 's') && (mac == 3))
	    {
	      printf("(Computer chose) --> [SCISSORS]|[SCISSORS] <-- (Player chose)\n");
	      
	      printf("It's a TIE!\n\n");
	      printf("********************************\n\n");
	    }
	  
    }

      system("clear");
      
      if (hum == 3)
	{ 
	  printf("HUMAN emerges as the ultimate winner!!\n\n");
	}
      
      if (com == 3)
	{
	  printf("COMPUTER emerges as the ultimate winner!!\n\n");
	}
      
      
      printf("Do you want to play again ?[0 -> continue][Any other number -> game over]: ");
      scanf("%d", &again);
      
      
      if (again == 0)
	{
	  system("clear");
	  
	  continue;
	}

      else
	{
	  system("clear");
	  
	  printf("GAME OVER!...Thankyou for playing!...\n\n");
	  exit(0);
	}
    }
}
 
