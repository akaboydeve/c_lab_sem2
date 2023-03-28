#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size=0;
	printf("Enter the size of the array: \n");
	scanf("%d",&size);

	int a=0;

	int *arr = (int *)malloc(size * sizeof(int));

	for(int i=0;i<size;i++)
	{
		printf("Enter the value of element %d : \n",i+1);
		scanf("%d", &arr[i]);

	}

	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
        	if (arr[i] > max)
        	{
            		max = arr[i];
        	}
    	}
    	int *freq = (int*)malloc(size * sizeof(int));

    	for (int i = 0; i < size; i++)
    	{
        	freq[arr[i]]++;
    	}
    	printf("Frequency of each element:\n");
    	for (int i = 0; i <= max; i++)
    	{
        	if (freq[i] > 0)
        	{
            		printf("%d occurs %d times\n", i, freq[i]);
       		}
   	}
	return 0;
}
