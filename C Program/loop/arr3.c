#include<stdio.h>
main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nPrinting elements of the array: \n");
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
}
