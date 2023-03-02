#include <stdio.h>

int main()
{
int ia , ib;
int isum, isub, ipro , idiv;
printf("Enter the First Number:\n");
scanf("%d",&ia);
printf("Enter the Second Number:\n");
scanf("%d",&ib);
isum=ia+ib;
isub=ia-ib;
ipro= ia*ib;
idiv = ia/ib;

printf("The address of First Number %d is: %p \n",ia,&ia);
printf("The address of Second Number %d is: %p \n",ia,&ib);

printf("The Sum of %d and %d is: %d \n",ia,ib,isum);
printf("The Sub of %d and %d is: %d \n",ia,ib,isub);

printf("The product of %d and %d is: %d \n",ia,ib,ipro);
printf("The division of %d and %d is: %d \n",ia,ib,idiv);

//float

float fa , fb, fpro ,fdiv;
float fsum, fsub;
printf("Enter the First Number for decimal:\n");
scanf("%f",&fa);
printf("Enter the Second Number for decimal:\n");
scanf("%f",&fb);
fsum=fa+fb;
fsub=fa-fb;
fpro= fa*fb;
fdiv = fa/fb;\

printf("The address of First decimal Number %f is: %p \n",fa,&fa);
printf("The address of Second decimal Number %f is: %p \n",fb,&fb);

printf("For decimal The Sum of %f and %f is: %f \n",fa,fb,fsum);
printf("For decimal The Sub of %f and %f is: %f \n",fa,fb,fsub);

printf("For decimal The product of %f and %f is: %f \n",fa,fb,fpro);
printf("For decimal The division of %f and %f is: %f \n",fa,fb,fdiv);

return 0;

}
