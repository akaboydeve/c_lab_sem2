#include<stdio.h>
#include<stdlib.h>

int main ()
{
int *Arr;

int n , i ,j , max , min ;
printf("Enter No of Elements \n");
scanf("%d",&n);
Arr = (int*)malloc(n* sizeof(int));

for(i = 0 ; i<n ;i++)
{
printf("Enter Element No %d:",i+1);
scanf("%d",&Arr[i]);
}

printf("The Array is \n");
for(i = 0 ; i<n ;i++)
{
printf("%d\t",Arr[i]);
}

for ( i = 1; i < n; ++i)
{
if (Arr[0] < Arr[i])
{
Arr[0] = Arr[i];
}
}
printf("\nMax Element is %d\n",Arr[0]);


for ( i = 1; i < n; ++i)
{
if (Arr[0] > Arr[i])
{
Arr[0] = Arr[i];
}
}
printf("Min Element is %d\n",Arr[0]);


return 0;
}

