//function without arguments and without return value
#include<stdio.h>
void add()
{
	int a,b,c;
	printf("Enter value of a and b:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition is =%d",c);
}
main()
{
	add();
}


