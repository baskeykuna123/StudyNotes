//function without arguments and with return value
#include<stdio.h>
int add()
{
	int a,b;
	printf("Enter two numbers to calculate:\n");
	scanf("%d%d",&a,&b);
	return a+b;
}
int main()
{
	int res;
	res=add();
	printf("Addition of two numbers are:%d",res);
}
