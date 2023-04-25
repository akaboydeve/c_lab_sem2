#include<stdio.h>
#include<stdlib.h>
int* Pingal_Number(int);

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int* Arr=Pingal_Number(n);
	for (int i=0; i<n; i++)
	{
		printf("%d\n", Arr[i]);
	}
	return 0;
}

int* Pingal_Number(int n)
{
	int* temp = (int*)malloc(n*sizeof(int));
	temp[0]=1;
	temp[1]=1;
	for (int i=2; i<n; i++)
	{
		temp[i]=temp[i-1]+temp[i-2];
	}
	return temp;
}
