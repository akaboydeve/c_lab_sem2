//patern
#include<stdio.h>

int main()
{
int i=0,j=0,n;
printf("Enter The Number");
scanf("%d",&n);

for(i=1;i <=n ; i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d\t",j);
	}
printf("\n");
}


return 0;
}
