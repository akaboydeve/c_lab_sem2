#include<stdio.h>

int main()
{
int amount;
int note500 =0 ,note200 =0 ,note100=0,note50=0,note20=0,note10=0;
int amount2 = 0;
printf("Enter the amount:\n");
scanf("%d",&amount);

amount2= amount;

note500 = amount2/500;
amount2= amount2 - note500*500;
note200 = amount2/200;
amount2 = amount2 - note200*200;
note100 = amount2/100;
amount2 = amount2 - note100*100;
note50 = amount2/50;
amount2= amount2 - note50*50;
note20 = amount2/20;
amount2 = amount2 - note20*20;
note10 = amount2/10;
amount2 = amount2 - note10*10;

printf("Note Sequence ( %d x500 + %d x200 + %d x100 + %d x50 + %d x20 + %d x10 )",note500,note200,note100,note50,note20,note10);




return 0;
}
