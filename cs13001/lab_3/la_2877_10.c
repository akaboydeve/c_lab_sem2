//pingala series
#include<stdio.h>

int main()
{
int n=0 ,i=1,sum=1,temp= 0,temp2 = 1;

printf("Enter The Number\n");
scanf("%d",&n);
//a
printf("%d that number of elements\n",n);
printf("1\t");
for (i= 1;i <= n;i++)
{
sum = temp2 + temp;
temp = temp2;
temp2= sum;

printf("%d\t",sum);
}
//b
sum = 1 ; temp = 0 ; temp2= 1;
printf("\nless than %d number of elements\n",n);
printf("1\t");
for (i= 1;i <= n;i++)
{
sum = temp2 + temp;
temp = temp2;
temp2= sum;

if(sum<=n)
{
printf("%d\t",sum);
}

}


return 0;
}
