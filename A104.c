#include<stdio.h>
#include<conio.h>
void nNatural(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	nNatural(n);
	getch();
}
void nNatural(int n)
{
	int i;
	for(i=1;i<=n;i++)
	    printf("%d ",i);
}

