#include<stdio.h>
main()
{
   int i,j,r,c;
   printf("Enter the no of rows and col of 2D array : ");
   scanf("%d%d",&r,&c);
   
   int arr[r][c];
	
	printf("Enter the ele of 2D array : ");
	for(i=0;i<r; i++)    //row  //0 1 2 
	{
		for(j=0; j<c;j++) //col
		{
			scanf("%d",&arr[i][j]); //67 4  67 33
									// 
	    }   
	}
    printf("\n the ele of an 2D array is : \n");	
   for(i=0;i<r; i++)    //row  //0 1 2 
	{
		for(j=0; j<c;j++) //col
		{
			printf("%d ",arr[i][j]); //67 4  67 33
									// 
	    }   
	    printf("\n");
	}
}
