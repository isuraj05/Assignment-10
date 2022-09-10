#include<stdio.h>
#include<conio.h>
int evenOdd(int);
int main()
{
	int n,eo;
	printf("Enter a number: ");
	scanf("%d",&n);
	eo=evenOdd(n);
	if(eo==1)
	    printf("It is an even number");
	else
	    printf("It is an odd number");
	getch();
}
int evenOdd(int n)
{
	return n%2==0;
}

