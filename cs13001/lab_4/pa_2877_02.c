#include<stdio.h>

int main ()
{
int a =3;
int b =40;
int c = 5;
int *pa = &a;
int *pb = &b;
printf("%p, %p\n", pa,pb);
printf("printing value respectively\n");
for(int i=0 ; i <3;i++)
{
printf("%d\n",*(pa+i));
}



return 0;
}
