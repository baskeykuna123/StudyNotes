#include<stdio.h>
main()
{
	int values[5];
	int i;
	printf("Enter five integers: \n");
	
	for(i=0; i<5;++i)
	{
		scanf("%d",&values[i]);
	}
	printf("Displaying integers:\n");
	
	for(i=0;i<6;++i)
	{
		printf("%d\n",values[i]);
	}
}
