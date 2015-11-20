#include "cards.h"

void lost(void)
{
	printf("You lost!\n");
}

void win(void)
{
	printf("You Win!\n");
}

void draw(void)
{
	printf("It's a Draw!\n");
}

char info()
{
	int i, j;
	char ch;

	system("clear");

	printf("Welcome to the 'Cards' game. Rules are very simple. You will get to choose 2 cards.\n");
	printf("Doesn't matter, if you will choose first one or second one.\n");
	printf("After your choose will play your opponent. Then higher card wins.\n");

	printf("\nHere is a list of cards and its values, from higher to smallest:\n\n");

	for(i = 0; *card_values[i][0]; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%s ", card_values[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Now what?\n(P) - Play\n(E) - Exit\n");
	scanf("%c", &ch);

	switch(ch)
	{
		case 'P':
		game();

		case 'p':
		game();

		default:
		printf("\nThanks for playing.\n");
	}
}


char game()
{
	unsigned int counts_p, counts_c; // player & computer

	char *cards[13] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};
	char *players_card, *players_card2, *comps_card; // player
	unsigned char ch1;

	counts_p = sizeof(cards) / sizeof(cards[0]);
	counts_c = sizeof(cards) / sizeof(cards[0]);

	players_card = cards[rand() % counts_p];
	players_card2 = cards[rand() % counts_p];
	comps_card = cards[rand() % counts_p];

	system("clear");
	printf("Choosing first card...\n");
	sleep(2);
	printf("Here is first card: ");

	printf("| %s%s%s |\n", purple, players_card, normal);
	printf("Do you want to play with this card? (Y/n)\n");
	
	scanf("%c", &ch1);

	if(ch1 == 'Y' || ch1 == 'y')
	{
		printf("Your card: | %s%s%s |\n", purple, players_card, normal);
		printf("\nComputer is playing...\n");
		sleep(3);
		printf("\nComputer's card: | %s%s%s |\n", red, comps_card, normal);

		if(players_card == "A" && comps_card == "2" || players_card == "A" && comps_card == "3" || players_card == "A" && comps_card == "4" || players_card == "A" && comps_card == "5" || players_card == "A" && comps_card == "6" || players_card == "A" && comps_card == "7" || players_card == "A" && comps_card == "8" || players_card == "A" && comps_card == "9" || players_card == "A" && comps_card == "10" || players_card == "A" && comps_card == "Q" || players_card == "A" && comps_card == "K")
		{
			win();			
		}

		else if(players_card == "K" && comps_card == "2" || players_card == "K" && comps_card == "3" || players_card == "K" && comps_card == "4" || players_card == "K" && comps_card == "5" || players_card == "K" && comps_card == "6" || players_card == "K" && comps_card == "7" || players_card == "K" && comps_card == "8" || players_card == "K" && comps_card == "9" || players_card == "K" && comps_card == "10" || players_card == "K" && comps_card == "J" || players_card == "K" && comps_card == "Q")
		{
			win();
		}

		else if(players_card == "Q" && comps_card == "2" || players_card == "Q" && comps_card == "3" || players_card == "Q" && comps_card == "4" || players_card == "Q" && comps_card == "5" || players_card == "Q" && comps_card == "6" || players_card == "Q" && comps_card == "7" || players_card == "Q" && comps_card == "8" || players_card == "Q" && comps_card == "9" || players_card == "Q" && comps_card == "10" || players_card == "Q" && comps_card == "J")
		{
			win();
		}

		else if(players_card == "J" && comps_card == "2" || players_card == "J" && comps_card == "3" || players_card == "J" && comps_card == "4" || players_card == "J" && comps_card == "5" || players_card == "J" && comps_card == "6" || players_card == "J" && comps_card == "7" || players_card == "J" && comps_card == "8" || players_card == "J" && comps_card == "9" || players_card == "J" && comps_card == "10")
		{
			win();
		}

		else if(players_card == "10" && comps_card == "2" || players_card == "10" && comps_card == "3" || players_card == "10" && comps_card == "4" || players_card == "10" && comps_card == "5" || players_card == "10" && comps_card == "6" || players_card == "10" && comps_card == "7" || players_card == "10" && comps_card == "8" || players_card == "10" && comps_card == "9")
		{
			win();
		}

		else if(players_card == "9" && comps_card == "2" || players_card == "9" && comps_card == "3" || players_card == "9" && comps_card == "4" || players_card == "9" && comps_card == "5" || players_card == "9" && comps_card == "6" || players_card == "9" && comps_card == "7" || players_card == "9" && comps_card == "8")
		{
			win();
		}

		else if(players_card == "8" && comps_card == "2" || players_card == "8" && comps_card == "3" || players_card == "8" && comps_card == "4" || players_card == "8" && comps_card == "5" || players_card == "8" && comps_card == "6" || players_card == "8" && comps_card == "7")
		{
			win();
		}

		else if(players_card == "7" && comps_card == "2" || players_card == "7" && comps_card == "3" || players_card == "7" && comps_card == "4" || players_card == "7" && comps_card == "5" || players_card == "7" && comps_card == "6")
		{
			win();
		}

		else if(players_card == "6" && comps_card == "2" || players_card == "6" && comps_card == "3" || players_card == "6" && comps_card == "4" || players_card == "6" && comps_card == "5")
		{
			win();
		}

		else if(players_card == "5" && comps_card == "2" || players_card == "5" && comps_card == "3" || players_card == "5" && comps_card == "4")
		{
			win();
		}

		else if(players_card == "4" && comps_card == "2" || players_card == "4" && comps_card == "3")
		{
			win();
		}

		else if(players_card == "3" && comps_card == "2")
		{
			win();
		}

		else if(players_card == comps_card)
		{
			draw();
		}

		else
		{
			lost();
		}
	}

	else if(ch1 == 'n' || ch1 == 'N')
	{
		system("clear");
		printf("I'm choosing another one...\n");
		sleep(2);
		printf("Your new card is: | %s%s%s |\n", purple, players_card2, normal);
		printf("\nComputer is playing...\n");
		sleep(3);
		printf("\nComputer's card: | %s%s%s |\n", red, comps_card, normal);

		if(players_card2 == "A" && comps_card == "2" || players_card2 == "A" && comps_card == "3" || players_card2 == "A" && comps_card == "4" || players_card2 == "A" && comps_card == "5" || players_card2 == "A" && comps_card == "6" || players_card2 == "A" && comps_card == "7" || players_card2 == "A" && comps_card == "8" || players_card2 == "A" && comps_card == "9" || players_card2 == "A" && comps_card == "10" || players_card2 == "A" && comps_card == "Q" || players_card2 == "A" && comps_card == "K")
		{
			win();
		}

		else if(players_card2 == "K" && comps_card == "2" || players_card2 == "K" && comps_card == "3" || players_card2 == "K" && comps_card == "4" || players_card2 == "K" && comps_card == "5" || players_card2 == "K" && comps_card == "6" || players_card2 == "K" && comps_card == "7" || players_card2 == "K" && comps_card == "8" || players_card2 == "K" && comps_card == "9" || players_card2 == "K" && comps_card == "10" || players_card2 == "K" && comps_card == "J" || players_card2 == "K" && comps_card == "Q")
		{
			win();
		}

		else if(players_card2 == "Q" && comps_card == "2" || players_card2 == "Q" && comps_card == "3" || players_card2 == "Q" && comps_card == "4" || players_card2 == "Q" && comps_card == "5" || players_card2 == "Q" && comps_card == "6" || players_card2 == "Q" && comps_card == "7" || players_card2 == "Q" && comps_card == "8" || players_card2 == "Q" && comps_card == "9" || players_card2 == "Q" && comps_card == "10" || players_card2 == "Q" && comps_card == "J")
		{
			win();
		}

		else if(players_card2 == "J" && comps_card == "2" || players_card2 == "J" && comps_card == "3" || players_card2 == "J" && comps_card == "4" || players_card2 == "J" && comps_card == "5" || players_card2 == "J" && comps_card == "6" || players_card2 == "J" && comps_card == "7" || players_card2 == "J" && comps_card == "8" || players_card2 == "J" && comps_card == "9" || players_card2 == "J" && comps_card == "10")
		{
			win();
		}

		else if(players_card2 == "10" && comps_card == "2" || players_card2 == "10" && comps_card == "3" || players_card2  == "10" && comps_card == "4" || players_card2 == "10" && comps_card == "5" || players_card2 == "10" && comps_card == "6" || players_card2 == "10" && comps_card == "7" || players_card2 == "10" && comps_card == "8" || players_card2 == "10" && comps_card == "9")
		{
			win();
		}

		else if(players_card2 == "9" && comps_card == "2" || players_card2 == "9" && comps_card == "3" || players_card2 == "9" && comps_card == "4" || players_card2 == "9" && comps_card == "5" || players_card2 == "9" && comps_card == "6" || players_card2 == "9" && comps_card == "7" || players_card2 == "9" && comps_card == "8")
		{
			win();
		}

		else if(players_card2 == "8" && comps_card == "2" || players_card2 == "8" && comps_card == "3" || players_card2 == "8" && comps_card == "4" || players_card2 == "8" && comps_card == "5" || players_card2 == "8" && comps_card == "6" || players_card2 == "8" && comps_card == "7")
		{
			win();
		}

		else if(players_card2 == "7" && comps_card == "2" || players_card2 == "7" && comps_card == "3" || players_card2 == "7" && comps_card == "4" || players_card2 == "7" && comps_card == "5" || players_card2 == "7" && comps_card == "6")
		{
			win();
		}

		else if(players_card2 == "6" && comps_card == "2" || players_card2 == "6" && comps_card == "3" || players_card2 == "6" && comps_card == "4" || players_card2 == "6" && comps_card == "5")
		{
			win();
		}

		else if(players_card2 == "5" && comps_card == "2" || players_card2 == "5" && comps_card == "3" || players_card2 == "5" && comps_card == "4")
		{
			win();
		}

		else if(players_card2 == "4" && comps_card == "2" || players_card2 == "4" && comps_card == "3")
		{
			win();
		}

		else if(players_card2 == "3" && comps_card == "2")
		{
			win();
		}

		else if(players_card2 == comps_card)
		{
			draw();
		}

		else
		{
			lost();
		}
	}

	else
	{
		printf("uhu....\n");
	}
	return 0;
}
