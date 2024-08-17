#include<stdio.h>
main()
{
	int m1[2][3]={{1,2,3},{4,5,6}
	};
	int m2[3][2]={{7,8},{9,10},{11,12}
	};
	int r[2][2],i,j,k,sum=0;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum + m1[i][k] * m2[k][j];
			}
			r[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d ",r[i][j]);
		}
		printf("\n");
	}
}
