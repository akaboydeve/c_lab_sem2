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
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
              			arr[j] = arr[j+1];
               			arr[j+1] = temp;
			}
		}
	}
	
	printf("Sorted array: ");
	for (int i = 0; i < size; i++)
	{
        	printf("%d ", arr[i]);
        }
    printf("\n");

	
	return 0;
}
