#include<stdio.h>
main()
{
	int i=1,n;
	printf("Ener n for multiplication of table:");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i=i+1;
	}
}
