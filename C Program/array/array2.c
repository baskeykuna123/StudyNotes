#include<stdio.h>
main()
{
	int a[5],i;
	printf("Please eneter numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("display numbers:");
	{
		for(i=0;i<5;i++)
		{
			printf("\n%d ",a[i]);
		}
	}
}
