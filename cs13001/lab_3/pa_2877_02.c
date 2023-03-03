//Even odd Using for and while loop
#include<stdio.h>

int main()
{
int a =0 , i=0;

printf("Enter limit\n");
scanf("%d",&a);

printf("Using while LOOP\n");

while(i<=a)
{
if((i%2)==0)
{
printf("%d is Even\n",i);
}
else
{
printf("%d is Odd\n",i);
}
i++;
}

printf("Using for LOOP\n");

for(i=0;i<=a;i++)
{

if((i%2)==0)
{
printf("%d is Even\n",i);
}
else
{
printf("%d is Odd\n",i);
}

}



return 0;
}
