#include<stdio.h>
main()
{
	int size;
	int a[size],i;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	printf("Enter the element of array: ");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of array are : \n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",a[i]);
	}
}
