//function with arguments and with return value
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Addition of two number is:%d",add(a,b));
}
