int main(int *argc, char **argv[])
{
    if (argc < 1 && argc > 5)
        printf("It should be between 1 to 5 weeks");

        return (0);
        
    week();

    return (0);

}

double five_percent(double num)
{
    double result = num * 1.05;

    return (result);
}

double Ten_percent(double num)
{
    double result = num * 0.1;

    return (result);
}

double Twenty_percent(double num)
{
    double result = num * 0.2;

    return (result);
}
double Fifty_percent(double num)
{
    double result = num * 0.5;

    return (result);
}
void parser()
{
    double first_week_T, second_week_T, third_week_T, fourth_week_T;
    double first_week_O, second_week_O, third_week_O, fourth_week_O;

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
     if (scanf("%lf", &first_week_T) != 1)
     printf("Error: invalid input");

void percent_calc(void)
{
     if (((Fivepercent + Fivepercent) != Tenpercent) && ((Tenpercent / 2) != Fivepercent))
    printf("Incorrect calculation");
    exit(1);

    if ((Tenpercent + Twentypercent + Twentypercent) != Fiftypercent)
    printf("Incorrect calculation");
    exit(1);
    
    if ((Tenpercent * 2) != Twentypercent)
    printf("Incorrect calculation");
    exit(1);

    if (Fiftypercent  != (others * 0.5))
    prinf("incorrect result");
    exit(1);
}

}
