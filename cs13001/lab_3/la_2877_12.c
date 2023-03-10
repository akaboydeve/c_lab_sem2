#include<stdio.h>

int main()
{
int i , j ,n;
printf("Enter the Number\n");
scanf("%d",&n);
for(i = 0;i<=n ; i++)
{

for(j=i;j>=0;j--)
{
if(j%2==0)
{
printf("0\t");
}
else
{
printf("1\t");
}
}
printf("\n");

}

return 0;
}
