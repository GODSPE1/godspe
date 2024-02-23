#include <stdio.h>
#include "main.h"

void prompt()
{
	printf("Enter the value of 1st week T: ");
	if (scanf("%f", &first_week_T) != 1)
		printf("Error: invalid input\n");

                printf("Enter the value of 2nd week T: ");
	if (scanf("%f", &second_week_T) != 1)
		printf("Error: invalid input\n");

         printf("Enter the value of 3rd week T: ");
	if (scanf("%f", &third_week_T) != 1)
		printf("Error: invalid input\n");

        printf("Enter the value of 4th week T: ");
	if (scanf("%f", &fourth_week_T) != 1)
		printf("Error: invalid input\n");

          printf("Enter the value of 5th week T: ");
	if (scanf("%f", &fifth_week_T) != 1)
		printf("Error: invalid input\n");

	printf("Enter the value of 1st week O: ");
	if (scanf("%f", &first_week_O) != 1)
		printf("Error: invalid input\n");


        printf("Enter the value of 2nd week O: ");
	if (scanf("%f", &second_week_O) != 1)
		printf("Error: invalid input\n");

         printf("Enter the value of 3rd week O: ");
	if (scanf("%f", &third_week_O) != 1)
		printf("Error: invalid input\n");

         printf("Enter the value of 4th week O: ");
	if (scanf("%f", &fourth_week_O) != 1)
		printf("Error: invalid input\n");

         printf("Enter the value of 5th week O: ");
	if (scanf("%f", &fifth_weeek_O) != 1)
		printf("Error: invalid input\n");
}