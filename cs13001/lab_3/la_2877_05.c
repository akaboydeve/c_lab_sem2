//size of data  type
#include<stdio.h>

int main()
{
int ch,i;
float f;
char c;
double d;
unsigned int ui;


printf("Press 1 : to find size of int\n");
printf("Press 2 : to find size of float\n");
printf("Press 3 : to find size of char\n");
printf("Press 4 : to find size of double\n");
printf("Press 5 : to find size of unsigned int\n");

scanf("%d",&ch);

switch(ch)
{
case 1:
	printf("Enter the integer: \n");
	scanf("%d",&i);
	printf("The size of the integer is: %ld.\n",sizeof(i));
	break;
case 2:
        printf("Enter the float: \n");
        scanf("%f",&f);
        printf("The size of the float is: %ld.\n",sizeof(f));
        break;
case 3:
        printf("Enter the char: \n");
        scanf("%c",&c);
        printf("The size of the char is: %ld.\n",sizeof(c));
        break;
case 4:
        printf("Enter the double: \n");
        scanf("%le",&d);
        printf("The size of the double is: %ld.\n",sizeof(d));
        break;
case 5:
        printf("Enter the integer: \n");
        scanf("%u",&ui);
        printf("The size of the unsigned integer is: %ld.\n",sizeof(ui));
        break;
default:
	printf("Wrong INPUT");
	break;

}


return 0;
}
