#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, count = 0;
	printf("Enter an integer: ");
	scanf("%d", &num);

	int temp = num;
	while (temp != 0)
	{
		count++;
        	temp /= 10;
    	}

	int* arr = (int*)malloc(count * sizeof(int));

	for (int i = 0; i < count; i++)
	{
        	arr[i] = num % 10;
        	num /= 10;
        }

        printf("Reversed number: ");

        for (int i = 0; i < count; i++)
        {
        	printf("%d", arr[i]);
        }
    return 0;
}
