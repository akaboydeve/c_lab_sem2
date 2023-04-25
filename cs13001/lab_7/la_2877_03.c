#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int x);

int main()
{
	int a =0;

	printf("Enter the number thatt you want to check:: \n");
	scanf("%d",&a);


	if(checkPrime(a) == true)
	{
		printf("%d is a prime number.\n",a);
	}
	else
	{
		printf("%d is not a prime number.\n",a);
	}

	return 0;
}

bool checkPrime(int x)
{
	int count = 0;

	for(int j = 1;j<=x;j++)
		{
			if(x%j == 0)
			{
				count++;
			}
		}

	if(count == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
