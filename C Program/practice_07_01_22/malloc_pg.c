#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;      //this pointer will hold the base address of the block created
	
	int n,i;
	printf("Enter the no of elements of the arr : \n");
	scanf("%d",&n); //4
	
	ptr = (int*)malloc(n * sizeof(int));	//Dynamically allocate memory using malloc()
	
	printf("\ninitial value of  malloc = %d",*ptr);
	if(ptr == NULL)					//Check if the memory has been successfully allocated by malloc or not
   {
         printf("memory not allocated.\n");
	     
    printf("memory not allocated.\n");
	     exit(0);
	}
	else
	{
		printf("\nMemory successfully allocated using malloc : %d\n",(sizeof(ptr)*n));   //Memory has been successfully allocated
			printf("enter the elements which you want to store at the memory space created by malloc function.....\n");
		for(i=0;i<n;i++)       /// Get the elements of the array
		{
		
			scanf("%d",&ptr[i]);
//			ptr[i]=i+1;			//1,2,3,4,5
		}
		
		printf("The elements of the array are: ");
                 for (i = 
  for (i = 0; i < n; i++)
		 {
           		 printf("%d ", ptr[i]); //1,2,3,4,5
                 }
    }
  
    return 0;
}

