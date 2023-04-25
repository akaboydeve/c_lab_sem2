#include<stdio.h>
#include<stdbool.h>

bool Armstrong(int number)
{
	int lastDigit = 0;
 	int power = 0;
  	int sum = 0;

  	int n = number;

  	while(n!=0)
  	{
     		lastDigit = n % 10;
     		power = lastDigit*lastDigit*lastDigit;
     		sum = sum+power;
     		n = n/10;
  	}

  	if(sum == number)
  	{
  		return true;
  	}
  	else
  	{
  		return false;
  	}
}

int main()
{
  	int number;

  	printf("Enter number: ");
  	scanf("%d",&number);

	if(Armstrong(number) == true)
	{
		printf("%d is an Armstrong number.\n",number);
	}
	else
	{
		printf("%d is not an Armstrong number\n",number);
	}

  	return 0;
}
