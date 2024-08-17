//calculate power of a number
#include<stdio.h>
int power(int,int);
int power(int n, int p)
{
	int r=1;
	while (p>=1)
	{
		r=r*n;
		p--;
	}
	return r;
}
int main()
{
	int pow,num,res;
	printf("Enter any number:\n");
	scanf("%d",&num);
	printf("Enter power of number\n");
	scanf("%d",&pow);
	res=power(num,pow);
	printf("%d's power %d=%d",num,pow,res);
}
