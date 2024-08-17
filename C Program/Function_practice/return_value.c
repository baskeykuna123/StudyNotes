//Maximum number from two numbers
#include<stdio.h>
int max(int x,int y);
int max(int x,int y)
{
	if (x>y)
		return x;
	else 
		return y;
		
}
main()
{
	int a,b,maxvalue;
	printf("Please enter numbers to compare:\n");
	scanf("%d%d",&a,&b);
	maxvalue=max(a,b);
	printf("Max value is:%d\n",maxvalue);
	
	
}
