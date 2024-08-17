#include<stdio.h>
main()
{
	int sum=0,i=1,n;
	while(i<=5)
	{
		printf("Enter a number=");
		scanf("%d",&n);
		sum=sum+n;
		i=i+1;
	}
	printf("sum is=%d",sum);
}
