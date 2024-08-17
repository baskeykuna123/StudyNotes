#include<stdio.h>
int x;
main()
{
	extern int x;
	x=8;
	printf("\nmain x=%d",x);
	f1();
	f2();
}

void f1()
{
	printf("\nf1 x=%d",x);
}

void f2()
{
	printf("\nf1 x=%d",x);
}
