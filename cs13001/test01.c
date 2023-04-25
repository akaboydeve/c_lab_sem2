#include<stdio.h>
#include<stdlib.h>

int main()
{

int size;
printf("Enter The Size of Array");
scanf("%d",&size);

int* Arr = (int*)malloc(size*(sizeof(int)));

for(int i = 0 ; i < size ; i++)
{
printf("Enter The Element No %d",size+1);

}

return 0;
}

