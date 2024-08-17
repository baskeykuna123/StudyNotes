#include<stdio.h>
main()
{
	int a,b,c,d,e;
	float total,avg,percentage;
	
	printf("Enter marks of 5 subjects: \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	avg=total/5;
	percentage=(total/500)*100;
	
	printf("Total marks = %f\n", total);
    printf("Average marks = %f\n",avg);
    printf("Net percentage = %f\n",percentage);
}
