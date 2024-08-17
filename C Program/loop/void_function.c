#include<stdio.h>

void addition(int num1,int num2)
{
	int sum;
	sum=num1+num2;
	printf("Addition is :%d",sum);
	//return sum;
	
	
}

int main()
{
	int var1,var2;
	printf("Enter number 1: \n");
	scanf("%d",&var1);
	printf("Enter number2: \n");
	scanf("%d",&var2);
	
	addition(var1,var2);
	//printf("output: %d",res);
	return 100;
}
