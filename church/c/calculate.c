#include <stdio.h>
#include "main.h"

void calculate(void)
{
	// Calculate percentages for each week
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

	/*fifth week.*/
	wk55percent = Five_percent(fifth_weeek_O);
	wk510percent = Ten_percent(fifth_weeek_O);
	wk520percent = Twenty_percent(fifth_weeek_O);
	wk550percent = Fifty_percent(fifth_weeek_O);

	// Calculate total for Conf, Union,Division and GC each percentage
	wk140percent = Fourty_percent(first_week_O) + first_week_T;
	wk240percent = Fourty_percent(second_week_O) + second_week_T;
	wk340percent = Fourty_percent(third_week_O) + third_week_T;
	wk440percent = Fourty_percent(fourth_week_O) + fourth_week_T;
	wk540percent = Fourty_percent(fifth_weeek_O) + fifth_week_T;


	wk1_total = first_week_T + wk110percent + wk110percent + wk120percent;
	wk2_total = second_week_T + wk210percent + wk210percent + wk220percent;
	wk3_total = third_week_T + wk310percent + wk310percent + wk320percent;
	wk4_total = fourth_week_T + wk410percent + wk410percent + wk420percent;
	wk5_total = fifth_week_T + wk510percent + wk510percent + wk520percent;

	//--------------------------------------------------------------------


	//Calculating District and local church offfering
	wk155percent = Sixty_percent(first_week_O);
	wk255percent = Sixty_percent(second_week_O);
	wk355percent = Sixty_percent(third_week_O);
	wk455percent = Sixty_percent(fourth_week_O);
	wk555percent = Sixty_percent(fifth_weeek_O);

	wk1_District_and_local = wk110percent + wk150percent;
	wk2_District_and_local = wk210percent + wk250percent;
	wk3_District_and_local = wk310percent + wk350percent;
	wk4_District_and_local = wk410percent + wk450percent;
	wk5_District_and_local = wk510percent + wk550percent;	
	//----------------------------------------------------

	//Five percent Average total
	Five_percent_total = wk15percent + wk25percent + wk35percent + wk45percent + wk55percent;
	Ten_percent_total = wk110percent + wk210percent + wk310percent + wk410percent + wk510percent;
	Twenty_percent_total = wk120percent + wk220percent + wk320percent + wk420percent + wk520percent;
	Fourty_percent_total = wk140percent + wk240percent + wk340percent + wk440percent + wk540percent;
	Fifty_percent_total = wk150percent + wk250percent + wk350percent + wk450percent + wk550percent;



	//Total sum of Tithe 
	Total_Tithe = first_week_T + second_week_T + third_week_T + fourth_week_T + fifth_week_T;

	//Total sum of Offering
	Offering_total = first_week_O + second_week_O + third_week_O + fourth_week_O + fifth_weeek_O;

	//Calculating total of tithe and 40% offferings local
	Tithe_fourty_percent_total = wk140percent + wk240percent + wk340percent + wk440percent + wk540percent;

	//Calculating total of District and local church offfering
	District_and_local_total = wk1_District_and_local + wk2_District_and_local + wk3_District_and_local + wk4_District_and_local + wk5_District_and_local;

	//Colum Grand Total
	// wk1_Colum_Grand_Total , wk2_Colum_Grand_Total, wk3_Colum_Grand_Total, wk4_Colum_Grand_Total;
	//Grand total
	Grand_total = Tithe_fourty_percent_total + District_and_local_total;
}
