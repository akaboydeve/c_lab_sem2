//loop for ASCII char
#include<stdio.h>

int main()
{
int i=0;

printf("Using while LOOP\n");

while(i<=255)
{

printf("%d = %c\n",i,i);
i++;

}

printf("Using for LOOP\n");

for(i=0;i<=255;i++)
{
printf("%d = %c\n",i,i);
}


return 0;
}
