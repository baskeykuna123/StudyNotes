#include<stdio.h>

main()
{
	int a[5]={56,45,67,54,23};
	int i;
	int (*ptr)[5];
	ptr =&a;
	
	for(i=0;i<5;i++)
	{
		printf("Address of the value stored at : %d index position %d\n",i,*ptr+i);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nValue stored at %d index position is  : %d",i,*(a+i));
	}
	

	
	
}
