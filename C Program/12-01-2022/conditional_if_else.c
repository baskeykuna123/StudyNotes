#include<stdio.h>
#include<conio.h>
#define NUMBER 10

main()
{
	#if(NUMBER==10)
	  printf("Value of number is : %d",NUMBER);
	#else
	    printf("End of program..");
	#endif        
getch();  
}
