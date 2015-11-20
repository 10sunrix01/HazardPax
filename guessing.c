// Functions for guessing numbers. It's wannabe Eurojackpot style.
//
// I'd like to add 'high score', or something like the most guessed numbers and then save
// it in a file with a name. 
//
//

#define MAX 7

int numbers(void)
{
  system("clear");

	unsigned int ch[7], i, j, k, right;
	size_t num1, num2, num3, num4, num5, num6, num7;
	int selected1, selected2, selected3, selected4, selected5, selected6, selected7;

	int x, y, sorted;

	right = 0;

	selected1 = (rand() % 49) + 1; // Random number from range 1 - 49
	selected2 = (rand() % 49) + 1;
	selected3 = (rand() % 49) + 1;
	selected4 = (rand() % 49) + 1;
	selected5 = (rand() % 49) + 1;
	selected6 = (rand() % 49) + 1;
	selected7 = (rand() % 49) + 1;

	printf("You must guess a 7 numbers from 49. Let's begin.\n\n");
	printf("Enter a 7 numbers:\n");
	for(i = 1; i <= 7; i++)
	{
		printf("%d. number: ", i);
		scanf("%d", &ch[i]);
				
		if(ch[i] <= 0 || ch[i] > 49)
		{
			printf("Only numbers in range 1 - 49!\n");
			exit(1);
		}

		for(j = 1; j <= i; j++) // Checking, if there are some duplicate numbers
		{
			for(k = 0; k < j; k++)
			{
				if(ch[j] == ch[k])
				{
					printf("You can't use one number twice!\n");
					exit(1);
				}
			}
		}

	}

	for(i = 1; i <= 7; ++i)
	{
		for(j = i + 1; j <= 7; ++j)
		{
			if(ch[i] > ch[j])
			{
				sorted = ch[i];
				ch[i] = ch[j];
				ch[j] = sorted;
			}
		}
	}

	printf("You have chosen these numbers: ");
	for(i = 1; i <= 7; ++i)
	{		
		printf("| %d | ", ch[i]);
	}
	printf("\n");

// 1
	printf("\nI'm drawing the 1st number\n");
	sleep(3);
	printf("And the 1st number is: %d\n", selected1);

	if(selected1 == ch[1] || selected1 == ch[2] || selected1 == ch[3] || selected1 == ch[4] || selected1 == ch[5] || selected1 == ch[6] || selected1 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}
	sleep(1);


// 2
	printf("\nI'm drawing the 2ns number number\n");
	sleep(3);
	printf("And the 2nd number is: %d\n", selected2);

	if(selected2 == ch[1] || selected2 == ch[2] || selected2 == ch[3] || selected2 == ch[4] || selected2 == ch[5] || selected2 == ch[6] || selected2 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}


// 3
	printf("\nI'm drawing the 3rd number\n");
	sleep(3);
	printf("And the 2nd number is: %d\n", selected3);

	if(selected3 == ch[1] || selected3 == ch[2] || selected3 == ch[3] || selected3 == ch[4] || selected3 == ch[5] || selected3 == ch[6] || selected3 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}


// 4
	printf("\nI'm drawing the 4th number\n\n");
	sleep(3);
	printf("And the 4th number is: %d\n", selected4);

	if(selected4 == ch[1] || selected4 == ch[2] || selected4 == ch[3] || selected4 == ch[4] || selected4 == ch[5] || selected4 == ch[6] || selected4 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}


// 5
	printf("\nI'm drawing the 5th number\n");
	sleep(3);
	printf("And the 5th number is: %d\n", selected5);

	if(selected5 == ch[1] || selected5 == ch[2] || selected5 == ch[3] || selected5 == ch[4] || selected5 == ch[5] || selected5 == ch[6] || selected5 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}


// 6
	printf("\nI'm drawing the 6th number\n");
	sleep(3);
	printf("And the 6th number is: %d\n", selected6);

	if(selected6 == ch[1] || selected6 == ch[2] || selected6 == ch[3] || selected6 == ch[4] || selected6 == ch[5] || selected6 == ch[6] || selected6 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}


// 7
	printf("\nI'm drawing the 7th number\n");
	sleep(3);
	printf("And the 7th number is: %d\n", selected7);

	if(selected7 == ch[1] || selected7 == ch[2] || selected7 == ch[3] || selected7 == ch[4] || selected7 == ch[5] || selected7 == ch[6] || selected7 == ch[7])
	{
		right = right + 1;
		printf("[ %s:)%s ] This number matches!\n\n", green, normal);
	}

	else
	{
		printf("[ %s:(%s ] The number doesn't match...\n\n", red, normal);
	}

	printf("Winning numbers: %d | %d | %d | %d | %d | %d | %d\n\n", selected1, selected2, selected3, selected4, selected5, selected6, selected7);
	printf("Guessed: %d\n", right);

	return 0;

}
