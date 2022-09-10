#include<stdio.h>
#include<conio.h>
void nOddNatural(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	nOddNatural(n);
	getch();
}
void nOddNatural(int n)
{
	int i;
	for(i=1;i<=n;i++)
	    printf("%d ",i*2-1);
}

