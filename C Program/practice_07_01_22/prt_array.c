#include<stdio.h>

main()
{
	int m[5]={56,45,67,54,23};
	int (*ptr)[5];
	ptr =&m;
	
	printf("%d",*ptr+0);
	printf("\n%d",*ptr+1);
	printf("\n%d",*ptr+2);
	printf("\n%d",*ptr+3);
	printf("\n%d",*ptr+4);
	
}
