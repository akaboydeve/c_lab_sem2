#include<stdio.h>

int main()
{

int date , month , year;

printf("Enter the date in ddmmyyyy Format:\n");
scanf("%d\n%d\n%d",&date,&month,&year);

if(((date>=1)&&(date<=30))&&((month>=1)&&(month<=12))&&((year>=1850)&&(year<=2050)))
{
printf("The Year %d . %d . %d is Valid",date,month,year);
}
else 
{
printf("The Year %d . %d . %d is NOT Valid",date,month,year);
}



return 0;
}
