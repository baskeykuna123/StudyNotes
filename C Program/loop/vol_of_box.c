#include<stdio.h>

void volumeofbox(int len,int bre,int hei)
{
	int volume=len*bre*hei;
	printf("%d",volume);
	
}

int main()
{
	volumeofbox(3,4,5);
	//return 0;
}
