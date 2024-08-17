#include<stdio.h>
main()
{
	int num,i,n,m;
	
	printf("Enter a number to calculate the multiplication table up to 10:\n");
	scanf("%d",&num);
	printf("Enter start number: \n");
	scanf("%d",&n);
	printf("Enter end  number: \n");
	scanf("%d",&m);
	
	for(i=n;i<=m;i++)
	{
		printf("Multiplications are : %d * %d = %d\n", i, num, num * i);
	}
}
