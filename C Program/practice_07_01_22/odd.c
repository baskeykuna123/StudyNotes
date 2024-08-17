#include<stdio.h>
main()
{
	int i=1,n;
	printf("Ener value of n\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		printf("%d/n",i);
		i=i+1;
	}
}
