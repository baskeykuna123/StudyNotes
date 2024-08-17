#include<stdio.h>

main()
{
	int num1,num2,add,sub,mul,div,mod;
	
	printf("Enter first number to calculate: \n");
	scanf("%d",&num1);
	printf("Enter secound number to calculate: \n");
	scanf("%d",&num2);
	
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	
	printf("Addition of num1 and num2 is: %d \n",add);
	printf("substraction of num1 and num2 is:%d \n",sub);
	printf("Multiplication  of num1 and num2 is:%d \n",mul);
	printf("Division of num1 and num2 is: %d\n",div);
	printf("Modular of num1 and num2 is:%d \n",mod);	
	
}
