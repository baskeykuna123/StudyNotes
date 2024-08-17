#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter number to find factor:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		printf("%d",i);
		i=i+1;
	}
}
