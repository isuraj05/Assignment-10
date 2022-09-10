#include<stdio.h>
#include<conio.h>
int contains(int,int);
int main()
{
	int m,n,con;
	printf("Enter a number and a digit: ");
	scanf("%d%d",&m,&n);
	con=contains(m,n);
	if(con==1)
	    printf("The digit is there in the number");
	else
	    printf("The digit is not there in the number");
	getch();
}
int contains(int m,int n)
{
	int dig;
	for(;m!=0;m=m/10)
	{
		dig=m%10;
		if(dig==n)
		    return 1;
	}
	if(m==0)
	    return 0;
}

