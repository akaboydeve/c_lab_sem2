#include<stdio.h>

int main()
{
int year;
printf("Enter Year:\n");
scanf("%d",&year);

if((year/4)==0)
{
printf("The Year %d is Leap Year\n",year);
}
else {
	printf("The Year %d is not Leap Year\n",year);
     }


return 0;
}
