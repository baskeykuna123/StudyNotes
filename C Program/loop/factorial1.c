#include<stdio.h>
//int fact();
int n;
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
	//int n;
	printf("Enter the value of factorial you want to calculate..!!\n");
	scanf("%d",&n);
	printf("Factorial of number is= %d ",fact(n));
}
