//factorial
#include<stdio.h>

int main()
{
	int a=0,i=1,fact=1;
	printf("Enter the number which you want to find the factorial: \n");
	scanf("%d",&a);
	printf("The factorial of %d is: ",a);
	if(a != 0)
	{
		for(i=1;i<=a;i++)
		{
			fact = fact*i;
		}
		printf("%d.\n",fact);
	}
	else
	{
		printf("1.\n");
	}
	return 0;
}
