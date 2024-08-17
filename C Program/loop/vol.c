#include<stdio.h>

int volumeofbox(int len,int bre,int hei)
{
	int volume=len*bre*hei;
	//printf("%d",volume);
	return len*bre*hei;
	
}

int main()
{
	int l,b,h;
	printf("Enter value:");
	scanf("%d%d%d",&l,&b,&h);
	
	//volumeofbox(3,4,5);
	int vol=volumeofbox(l,b,h);
	printf("output: %d",vol);
	//return 0;
}
