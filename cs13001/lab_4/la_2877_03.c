#include<stdio.h>

int main ()
{

int a ,b , temp ;
int *pa = &a , *pb =&b , *ptemp = &temp;

printf("Enter the Numbers\n");

scanf("%d",pa);
scanf("%d",pb);

printf("a = %d , b = %d\n",*pa ,*pb);

*ptemp = *pa;
*pa = *pb;
*pb = *ptemp;

printf("After Swap using 3rd variable \n a =%d and b=%d\n",*pa ,*pb);


return 0;
}
