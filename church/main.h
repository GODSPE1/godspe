#ifndef MAIN_H
#define MAIN_H

extern double first_week_T, second_week_T, third_week_T, fourth_week_T;
extern double first_week_O, second_week_O, third_week_O, fourth_week_O;
extern double wk15percent, wk110percent, wk120percent, wk150percent;
extern double wk25percent, wk210percent, wk220percent, wk250percent;
extern double wk35percent, wk310percent, wk320percent, wk350percent;
extern double wk45percent, wk410percent, wk420percent, wk450percent;
extern double wk1Others, wk2Others, wk3Others, wk4Others;
extern double Grand_total, wk1_total, wk1_ll_total, wk2_total, wk2_ll_total, wk3_total, wk3_ll_total, wk4_total, wk4_ll_total;
extern double Five_percent_total, Ten_percent_total, Twenty_percent_total, Fifty_percent_total;
extern double T_total, LL_total, O_total, Off_total;

#include <stdlib.h>

void parser();
double Five_percent(double num);
double Ten_percent(double num);
double Twenty_percent(double num);
double Fifty_percent(double num);
void test_percent();

#endif
