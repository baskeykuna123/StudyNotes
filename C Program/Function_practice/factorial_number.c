#include<stdio.h>
int fact(int);
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int main()
{
	int n,f;
	printf("Enter number:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial =%d",f);
}
