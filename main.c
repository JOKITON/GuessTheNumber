
#include "game.h"

void	get_input(int number)
{
	int	input;

	input = 0;
	printf("		___Guess_The_Number___		\n\n");
	printf("	Enter a number: ");
	while (1)
	{
		scanf("%d", &input);
		if (input == number)
		{
			printf("\n\n		Congrats! You won!\n\n");
			usleep(1000);
			exit(1);
		}
		else
		{
			if (input > number)
				printf("\n	Sorry, that's too high! Try again!\n\n");
			else
				 printf("\n      Sorry, that's too low!. Try again!\n\n");
			usleep(1500000);
			system("clear");
			printf("                ___Guess_The_Number___          \n\n");                                                      printf("        Enter a number: ");
		}

	}
}


int	main(void)
{
	unsigned int number;

	number = rand();
	while (number > 100)
		number /= 7;
	get_input(number);
	return (0);
}
