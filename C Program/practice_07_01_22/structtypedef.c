//Prog for typedef with structure
#include<stdio.h>
#include<string.h>
typedef struct Animal
{
	int age;
	char name[10];
	char type[10];
	
}A;
//typedef int  i;
main()
{
	A a1[3]; 
	int i;
	
	for(i=0;i<3;i++)
	{
      printf("Enter the details of %d animal : ",i);
	  printf("\nenter the name of %d animal : ",i);
      scanf("%s",&a1[i].name);
	  printf("\nenter the type of %d animal : ",i);
	  scanf("%s",&a1[i].type);
	  printf("\nenter the age of %d animal : ",i);
	  scanf("%d",&a1[i].age);
    }
 for(i=0;i<3;i++)
	{
	    printf("\n\nthe details of %s is ==> ",a1[i].name);
	    printf("\nname is : %s \ntype is : %s \nage is : %d",a1[i].name,a1[i].type,a1[i].age);
	
   }
}
