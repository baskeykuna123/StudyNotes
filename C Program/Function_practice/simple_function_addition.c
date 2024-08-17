#include<stdio.h>

int add(int,int);
int add(int x,int y)
{
	printf("Addition of two numbers is:%d",x+y);
}

main()
{
	int a=2,b=3;
	add(a,b);
}
