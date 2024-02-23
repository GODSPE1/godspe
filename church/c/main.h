#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

float first_week_T, second_week_T, third_week_T, fourth_week_T, fifth_week_T;
float first_week_O, second_week_O, third_week_O, fourth_week_O, fifth_weeek_O;
float wk15percent, wk110percent, wk120percent, wk150percent;
float wk25percent, wk210percent, wk220percent, wk250percent;
float wk35percent, wk310percent, wk320percent, wk350percent;
float wk45percent, wk410percent, wk420percent, wk450percent;
float wk510percent, wk520percent, wk550percent, wk540percent, wk55percent;
float wk1Others, wk2Others, wk3Others, wk4Others;
float Grand_total, wk1_total, wk2_total, wk3_total, wk4_total, wk5_total;
float Five_percent_total, Ten_percent_total, Twenty_percent_total, Fourty_percent_total, Fifty_percent_total;
float Total_Tithe, Tithe_fourty_percent_total, O_total, Offering_total, District_and_local_total;
float wk140percent, wk240percent, wk340percent, wk440percent;
float wk1_District_and_local, wk2_District_and_local, wk3_District_and_local, wk4_District_and_local, wk5_District_and_local;
float wk155percent,  wk255percent,  wk355percent, wk455percent, wk555percent;
float wk1_Colum_Grand_Total, wk2_Colum_Grand_Total, wk3_Colum_Grand_Total, wk4_Colum_Grand_Total;


void print();
void prompt();
void calculate();
float Five_percent(float num);
float Ten_percent(float num);
float Twenty_percent(float num);
float Fourty_percent(float num);
float Fifty_percent(float num);
float Sixty_percent(float num);
void test_percent();

#endif
