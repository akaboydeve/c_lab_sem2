#include<stdio.h>

int main ()
{

int a ,b;
int *pa = &a , *pb =&b;

printf("Enter the Numbers\n");

scanf("%d",pa);
scanf("%d",pb);

printf("a = %d , b = %d\n",*pa ,*pb);

*pa = (*pa)+(*pb);
*pb = (*pa)-(*pb);
*pa = (*pa)-(*pb);

printf("After Swap without 3rd variable \n a =%d and b=%d\n",*pa ,*pb);


return 0;
}
