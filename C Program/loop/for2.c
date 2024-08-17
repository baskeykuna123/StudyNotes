#include<stdio.h>

main()
{
	int num,count,sum=0;
	printf("Enter numbers to print..!!\n");
	scanf("%d",&num);
	
	for(count=1;count<=num;++count)
	{
		sum+=count;
	}
	printf("sum=%d",sum);
}
