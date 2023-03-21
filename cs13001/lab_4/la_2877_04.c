
#include<stdio.h>

int main ()
{
int i =1 , j=1 , n ;

int *pi = &i , *pj = &j , *pn = &n ;

printf("Enter the Number");
scanf("%d",pn);

for(*pi = 1 ; *pi <= *pn ; *pi=*pi+1 )
{

for(*pj = 1 ; *pj <= *pi ; *pj=*pj +1 )
{
printf("%d\t",*pj);
}
printf("\n");
}




return 0;
}
