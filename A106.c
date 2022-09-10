#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter a number: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of the number is %d",fact);
	getch();
}
int factorial(int n)
{
	int i,fact;
	for(fact=1,i=1;i<=n;i++)
	    fact=fact*i;
	return fact;
}

