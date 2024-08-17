#include<stdio.h>
int fact();
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}	
}
main ()
{
	printf("Factorial of number is= %d ",fact(5));
}
