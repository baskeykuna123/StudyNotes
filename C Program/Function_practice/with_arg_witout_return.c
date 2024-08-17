//function with arguments and without return value
#include<stdio.h>
void add(int a,int b)
{
	printf("Addition of two numbers are:%d",a+b);	
	
}
void main()
{
	int a,b,c;
	printf("Enter valuse of a and b:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	add(a,b);
	
}
