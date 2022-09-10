	#include<stdio.h>
#include<conio.h>
void primeFactor(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	primeFactor(n);
	getch();
}
void primeFactor(int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				    break;
			}
			if(j==i/2+1)
			    printf("%d ",i);														
		}
	}
}

