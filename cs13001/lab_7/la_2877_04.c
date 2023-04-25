#include<stdio.h>
#include<stdbool.h>

bool checkLeap(int a);

int main()
{
	int year = 0;

	printf("Enter the year: \n");
	scanf("%d",&year);

	if(checkLeap(year) == true)
	{
		printf("%d is a leap year.\n",year);
	}
	else
	{
		printf("%d is not  a leap year.\n",year);
	}

	return 0;
}

bool checkLeap(int a)
{
	if(a % 4 == 0 || a % 400 == 0 && a % 100 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
