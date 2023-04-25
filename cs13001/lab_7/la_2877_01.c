#include<stdio.h>

int Ascii(char ch);

int main()
{
	char ch;

	printf("Enter the character: \n");
	scanf("%c",&ch);

	printf("The Ascii equivalent of %c is : %d.\n",ch,Ascii(ch));

	return 0;
}

int Ascii(char ch)
{
	int ascii = ch;

	return ascii;
}
