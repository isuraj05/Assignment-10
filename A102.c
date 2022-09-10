#include<stdio.h>
#include<conio.h>
float simpleInterest(int,int,int);
int main()
{
	int p,r,t;
	float si;
	printf("Enter principle,rate and time: ");
	scanf("%d%d%d",&p,&r,&t);
	si=simpleInterest(p,r,t);
	printf("Simple interest is %f",si);
	getch();
}
float simpleInterest(int p,int r,int t)
{
	return p*r*t/100;
}

