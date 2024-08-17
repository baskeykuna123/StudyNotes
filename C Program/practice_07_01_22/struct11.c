#include<stdio.h>
struct Animal
{
	int age;
	char type[10];
	
};
main()
{
	struct Animal cat,dog;
	cat.age=4;
	strcpy(cat.type,"pet");
	printf("Age of cat is : %d",cat.age);
	printf("\ncat is %s type of animal ;",cat.type);
	
	lion.age=4;
	cat.type="wILD";
	printf("Age of cat is : %d",lion.age);
	printf("\ncat is %s type of animal ;",lion.type)
}
