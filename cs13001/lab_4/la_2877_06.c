#include<stdio.h>

int main ()
{
int Arr[5];

int i ,j , max , min ;

for(i = 0 ; i<5 ;i++)
{
printf("Enter Element No %d:",i+1);
scanf("%d",&Arr[i]);
}

printf("The Array is \n");
for(i = 0 ; i<5 ;i++)
{
printf("%d\t",Arr[i]);
}

for ( i = 1; i < 5; ++i)
{
if (Arr[0] < Arr[i])
{
Arr[0] = Arr[i];
}
}
printf("\nMax Element is %d\n",Arr[0]);


for ( i = 1; i < 5; ++i)
{


return 0;
}

