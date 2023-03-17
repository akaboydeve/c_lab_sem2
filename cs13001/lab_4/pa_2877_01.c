//address

#include<stdio.h>

int main()
{
int a = 3 ; int *pa = &a;
int **ppa = &pa;
int ***pppa = &ppa;
printf("Value of a is %d\n",a);
printf("address of a %p\n",&a);
printf("value of pa %p\n",pa);
printf("Dereferance *pa is %d\n",*pa);
printf("ppa is %p\n",ppa);
printf("*ppa is %p\n",*ppa);
printf("**ppa is %d\n",**ppa);


return 0;
}
