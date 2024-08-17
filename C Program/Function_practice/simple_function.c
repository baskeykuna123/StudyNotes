#include<stdio.h>
void add(int x,int y);
void add(int x,int y)
{
	printf("Returning to main\n");
	printf("Addition of two numbers is :%d",(x+y));
	//printf("Returning to main");
}

void main()
{
	int a,b;
	printf("Please enter two numbers to calculate:\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	//printf("Returning to main");
}
