
#include "game.h"

void	get_input(int number)
{
	int	input;
	int	flag;

	input = 0;
	flag = 0;
	printf("		___Guess_The_Number_1-100__		\n\n");
	printf("	Enter a number: ");
	while (1)
	{
		flag = scanf("%d", &input);
		if (flag == 0)
		{
			printf("\n		Sorry, you entered a non-number! Try again!\n\n");
			usleep(1500000);
			system("clear");
			while (getchar() != '\n') 
				continue;
		}
		if (input == number && flag)
		{
			printf("\n\n		Congrats! You won!\n\n");
			exit(1);
		}
		if (input != number && flag)
		{
			if (input > number)
				printf("\n	Sorry, that's too high! Try again!\n\n");
			else
				 printf("\n      Sorry, that's too low!. Try again!\n\n");
			usleep(1500000);
			system("clear");
		}
		printf("                ___Guess_The_Number_1-100__          \n\n");
		printf("        Enter a number: "); 

	}
}


void get_input1(int number) {
    int input;
    int flag;

    printf("                ___Guess_The_Number_1-100__          \n\n");
    printf("        Enter a number: ");

    while (1) {
        flag = scanf("%d", &input);

        if (flag == 0) {
            printf("\n              Sorry, you entered a non-number! Try again!\n\n");
            usleep(1500000);
            system("clear");

            // Clear the input buffer
            while (getchar() != '\n') {
                continue;
            }
        } else {
            if (input == number) {
                printf("\n\n            Congrats! You won!\n\n");
                exit(1);
            } else {
                if (input > number) {
                    printf("\n      Sorry, that's too high! Try again!\n\n");
                } else {
                    printf("\n      Sorry, that's too low! Try again!\n\n");
                }

                usleep(1500000);
                system("clear");
            }
        }

        printf("                ___Guess_The_Number___          \n\n");
        printf("        Enter a number: ");
    }
}


int	main(void)
{
	unsigned int number;

	srand(time(NULL));
	number = rand() % 101;
	get_input(number);
	return (0);
}
