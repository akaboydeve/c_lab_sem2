#include<stdio.h>

int main()
{
int a=0;
printf("Enter the marks");
scanf("%d",&a);

if((a<=100)&&(a>90))
{
printf("O\n");
}
else if((a>80))
{
printf("E\n");
}
else if((a>70))
{
printf("A\n");
}
else if((a>60))
{
printf("B\n");
}
else if((a>50))
{
printf("C\n");
}
else if((a>36))
{
printf("D\n");
}
else if((a<=36)&&(a>=0))
{
printf("F\n");
}
else
{
printf("Wrong Input\n");
}

return 0;
}
