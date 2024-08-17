#include<stdio.h>
main()
{
	int a,b,c,large;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	
	large=a>b? (a>b?a:c) : (b>c?b:c);
	printf("The larger no is :%d\n", large);
}
