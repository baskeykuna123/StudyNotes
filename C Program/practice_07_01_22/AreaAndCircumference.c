#include<stdio.h>
main()
{
	float r,a,c;
	printf("Enter radius : \n");
	scanf("%f",&r);
	//a=pi*r*r
	a=3.14*r*r;
	//c=2*pi*r
	c=2*3.14*r;
	
	printf("Area of circle is : %f \n",a);
	printf("Circumference of circle is : %f \n",c);
	
}
