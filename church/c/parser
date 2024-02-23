#include <stdio.h>
#include "main.h"

void parser()
{
        double first_week_T, second_week_T, third_week_T, fourth_week_T;
        double first_week_O, second_week_O, third_week_O, fourth_week_O;
        double wk15percent, wk110percent, wk120percent, wk150percent;
        double wk25percent, wk210percent, wk220percent, wk250percent;
        double wk35percent, wk310percent, wk320percent, wk350percent;
        double wk45percent, wk410percent, wk420percent, wk450percent;
	double wk1Others, wk2Others, wk3Others, wk4Others;
        double Grand_total, wk1_total, wk1_ll_total, wk2_total, wk2_ll_total, wk3_total, wk3_ll_total, wk4_total, wk4_ll_total;
	double Five_percent_total, Ten_percent_total, Twenty_percent_total, Fifty_percent_total;
	double T_total, LL_total, O_total, Off_total;



        printf("what is the value of 1st week t: ");
        if (scanf("%lf", &first_week_T) != 1)
                printf("Error: invalid input");


        printf("what is the value of 1st week o: ");
        if (scanf("%lf", &first_week_O) != 1)
                printf("Error: invalid input");


        printf("what is the value of 2nd week t: ");
        if (scanf("%lf", &second_week_T) != 1)
                printf("Error: invalid input");


        printf("what is the value of 2nd week o: ");
        if (scanf("%lf", &second_week_O) != 1)
                printf("Error: invalid input");


        printf("what is the value of 3rd week t: ");
        if (scanf("%lf", &third_week_T) != 1)
                printf("Error: invalid input");


        printf("what is the value of 3rd week o: ");
        if (scanf("%lf", &third_week_O) != 1)
                printf("Error: invalid input");


        printf("what is the value of 4th week t: ");
        if (scanf("%lf", &fourth_week_T) != 1)
                printf("Error: invalid input");

        printf("what is the value of 4th week o: ");
        if (scanf("%lf", &fourth_week_O) != 1)
                printf("Error: invalid input");

        /*first week.*/
	wk15percent = Five_percent(first_week_O);
	wk110percent = Ten_percent(first_week_O);
	wk120percent = Twenty_percent(first_week_O);
	wk150percent = Fifty_percent(first_week_O);

	/*second week*/
	wk25percent = Five_percent(second_week_O);
        wk210percent = Ten_percent(second_week_O);
        wk220percent = Twenty_percent(second_week_O);
        wk250percent = Fifty_percent(second_week_O);

	/*Tihird week*/
	wk35percent = Five_percent(third_week_O);
        wk310percent = Ten_percent(third_week_O);
        wk320percent = Twenty_percent(third_week_O);
        wk350percent = Fifty_percent(third_week_O);

	/*fourth week.*/
	wk45percent = Five_percent(fourth_week_O);
        wk410percent = Ten_percent(fourth_week_O);
        wk420percent = Twenty_percent(fourth_week_O);
        wk450percent = Fifty_percent(fourth_week_O);

        /*test_percent();*/

        wk1_ll_total = first_week_T + wk15percent + wk15percent + wk110percent + wk120percent;
        wk2_ll_total = second_week_T + wk25percent + wk25percent + wk220percent + wk210percent;
        wk3_ll_total = third_week_T + wk35percent + wk35percent + wk310percent + wk320percent;
        wk4_ll_total = fourth_week_T + wk410percent + wk45percent + wk45percent + wk420percent;
        

        wk1Others = wk15percent + wk150percent;
        wk2Others = wk25percent + wk250percent;
        wk3Others = wk350percent + wk35percent;
        wk4Others = wk350percent + wk35percent;
       
        
        wk1_total = wk1_ll_total + wk1Others;
        wk2_total = wk2_ll_total + wk2Others;
        wk3_total = wk3_ll_total + wk3Others;
        wk4_total = wk4_ll_total + wk4Others;

       


	Five_percent_total = wk15percent + wk25percent + wk35percent + wk45percent;
        Ten_percent_total = wk110percent + wk210percent + wk310percent + wk410percent;
        Twenty_percent_total = wk120percent + wk220percent + wk320percent + wk420percent;
        Fifty_percent_total = wk150percent + wk250percent + wk350percent + wk450percent;

        /*GRNAND TOTALS*/
        O_total = wk1Others + wk2Others + wk3Others + wk4Others;
        Off_total = first_week_O + second_week_O + third_week_O + fourth_week_O;
        T_total = first_week_T +  second_week_T + third_week_T + fourth_week_T;
	LL_total = wk1_ll_total + wk2_ll_total + wk3_ll_total + wk4_ll_total;

        /*printing percentages*/
        printf("First Conf 10%%: %f\n", wk15percent);
        printf("Incorrect calculation Five percent\n");
        printf("Incorrect calculation Twenty percent\n");
	printf("incorrect result\n");
	
        /*printing less local */
        printf("Less local week1 total: %f\n", wk1_total);
        printf("Less local week2 total: %f\n", wk2_total);
        printf("Less local week3 total: %f\n", wk3_total);
        printf("Less local week4 total: %f\n", wk4_total);

        /*printing other total*/
        printf("Other total week1: %f\n", wk1Others);
        printf("Other total week2: %f\n", wk2Others);
        printf("Other total week3: %f\n", wk3Others);
        printf("Other total week4: %f\n", wk4Others);

        if ((T_total + Five_percent_total + Five_percent_total + Ten_percent_total + Twenty_percent_total) != LL_total)
        {
                printf("Incorrect calculation for Less Local Total");
        }

        Grand_total = LL_total + O_total;
        
        if ((T_total + Off_total) == Grand_total)
        {
                if ((Grand_total - T_total - LL_total) == 0)
                {
                        if ((T_total + Five_percent_total + Five_percent_total + Ten_percent_total + Twenty_percent_total + Ten_percent_total + Fifty_percent_total) == Grand_total)
                        {
                                printf("GRAND Total = %f\n", Grand_total);
                        }
                }
        }
        else
                printf("Incorrect Grand total");
        
        printf("Less local total: %f\n", wk1_total);
        printf("Less local total: %f\n", wk2_total);
        printf("Less local total: %f\n", wk3_total);
        printf("Less local total: %f\n", wk4_total);
        
}
