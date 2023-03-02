#include <stdio.h>

int main()
{
int date_today=0 ,date_birth=0,month_today=0,month_birth=0,year_today=0,year_birth=0;
int cal_date,cal_month,cal_year;
printf("Enter today's year\n");
scanf("%d",&year_today);

printf("Enter today's month\n");
scanf("%d",&month_today);

printf("Enter today's day\n");
scanf("%d",&date_today);


printf("Enter Birth year\n");
scanf("%d",&year_birth);

printf("Enter birth month\n");
scanf("%d",&month_birth);

printf("Enter birth day\n");
scanf("%d",&date_birth);

cal_year=(year_today-year_birth);
cal_month=((month_today-month_birth)+12%12);
cal_date=(date_today-date_birth+30)%30;

printf("Today Your age is:\n");
printf("%d Year(s) %d Month(s) %d Day(s) \n",cal_year,cal_month,cal_date);



return 0;
}
