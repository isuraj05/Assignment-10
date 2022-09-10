#include<stdio.h>
#include<conio.h>
int factorial(int);
int combi(int,int);
int main()
{
	int n,r;
	printf("Enter the values of n and r to calculate the number of combinations: ");
	scanf("%d%d",&n,&r);
	factorial(n);
	printf("Number of combinations are %d",combi(n,r));
	getch();
}

int factorial(int n)
{
	int i,fact;
	for(fact=1,i=1;i<=n;i++)
	    fact=fact*i;
	return fact;
}

int combi(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}
