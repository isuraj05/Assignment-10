#include<stdio.h>
#include<conio.h>
float circleArea(float);
int main()
{
	float r,area;
	printf("Enter a radius: ");
	scanf("%f",&r);
	area=circleArea(r);
	printf("Area of circle is %f",area);
	getch();
}
float circleArea(float r)
{
	return 3.14*r*r;
}

