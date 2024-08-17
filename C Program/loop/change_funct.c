#include<stdio.h>

//call by value
void change(int n)
{
	n=n+100;
	printf("Formal parameter n %d\n",n);
}

main()
{
	int n=50;
	printf("before calling change() n is : %d\n",n);
	
	change(n);
	printf("After calling change() n is : %d",n);
}
