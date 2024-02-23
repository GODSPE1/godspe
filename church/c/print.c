#include <stdio.h>
#include "main.h"

void print()
{
       	// Print week 1 percentage values	
	printf("Week1 10%%: %f\n", wk110percent);
        printf("Week1 5%%: %f\n", wk15percent);
	printf("Week1 20%%: %f\n", wk120percent);
	printf("Week1 50%%: %f\n", wk150percent);
        
        // print week2 percentage values
	printf("Week2 10%%: %f\n", wk210percent);
        printf("Week2 5%%: %f\n", wk25percent);
	printf("Week2 20%%: %f\n", wk220percent);
	printf("Week2 50%%: %f\n", wk250percent);

        //printing week3 percentage values
        printf("Week3 10%%: %f\n", wk310percent);
        printf("Week3 5%%: %f\n", wk35percent);
	printf("Week3 20%%: %f\n", wk320percent);
	printf("Week3 50%%: %f\n", wk350percent);
       
        //printing week4 percentage values
	printf("Week4 10%%: %f\n", wk410percent);
        printf("Week4 5%%: %f\n", wk45percent);
	printf("Week4 20%%: %f\n", wk420percent);
	printf("Week4 50%%: %f\n", wk450percent);

        // printing week5 percentage values
        printf("Week5 10%%: %f\n", wk510percent);
        printf("Week5 5%%: %f\n", wk55percent);
	printf("Week5 20%%: %f\n", wk520percent);
	printf("Week5 50%%: %f\n", wk550percent);

        // printing each weekly 40%
        printf("first TOTAL wk1: %f\n", wk140percent);
        printf("first TOTAL wk2: %f\n", wk240percent);
	printf("first TOTAL wk3: %f\n", wk340percent);
	printf("first TOTAL wk4: %f\n", wk440percent);
        printf("first TOTAL wk5: %f\n", wk540percent);

        /*printing the distric and local church total*/
        printf("First TOTALS: %f\n", Tithe_fourty_percent_total);

        // printing each weekly Totals second column
        printf("District and local church total wk1: %f %f\n", (wk110percent + wk150percent), wk155percent);
        printf("District and local church total wk2: %f %f\n", (wk210percent + wk250percent), wk255percent);
	printf("District and local church total wk3: %f %f\n", (wk310percent + wk350percent), wk355percent);
	printf("District and local church total wk4: %f %f\n", (wk410percent + wk450percent), wk455percent);
        printf("District and local church total wk5: %f %f\n", (wk510percent + wk550percent), wk555percent);

        // Grand totals
        
        //printing total tithe
        printf("Total tithe: %f\n", Total_Tithe);

        //printing percentage TOTALS

        printf("Ten percent total: %f\n", Ten_percent_total);
        printf("Five percent total: %f\n", Five_percent_total);
        printf("Twenty percent total: %f\n", Twenty_percent_total);

        /*printing the distric and local church total*/
        printf("First TOTALS: %f\n  %f\n", Tithe_fourty_percent_total, (Ten_percent_total + Five_percent_total + Five_percent_total + Twenty_percent_total + Total_Tithe));
        

        /*printing the distric and local church total*/
        printf("District(10%%) Total: %f\n", Ten_percent_total);
        
        //Calculating Total of District and local church offfering
	printf("District and local church total: %f  %fs\n", (Five_percent_total * 10), (Fifty_percent_total + Ten_percent_total));

        printf("SECOND TOTAL: %f\n", District_and_local_total);      
        
         // Grand Total columns
        printf("GRAND TOTALS wk1: %f\n", wk140percent + wk110percent + wk150percent); 
        printf("GRAND TOTALS wk2: %f\n", wk240percent + wk210percent + wk250percent);
	printf("GRAND TOTALS wk3: %f\n", wk340percent + wk310percent + wk350percent);
	printf("GRAND TOTALS wk4: %f\n", wk440percent + wk410percent + wk450percent);
        printf("GRAND TOTALS wk5: %f\n", wk540percent + wk510percent + wk550percent);


        // Grand total
        printf("GRAND TOTAL: %f", Grand_total);
}