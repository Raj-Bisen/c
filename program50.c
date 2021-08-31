// Input :       Row=4       col=4          
// output :  
/*
	#	#	#	#       

	#	*	*	#
 
	#	*	*	#
	
	#	#	#	#
		
				i==1
		1,1       1,2        1,3       1,4                   
 j==1	2,1        2,2        2,3       2,4                j==iCol
		3,1        3,2        3,3       3,4                  
		4,1        4,2        4,3        4,4                
		
				i==iRow
*/

#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i=0, j=0;
	printf("\n");
	
	for(i=1 ;i<=iRow;i++)             // 1
	{
	
		for(j=1;j<=iCol;j++)         // 2
		{
			
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
			
		}	
		printf("\n");
	}
}
int main()
{
	unsigned int iValue1=0,iValue2=0;
	
	
	printf("Enter numbr of rows :");
	scanf("%u",&iValue1);
	
	printf("Enter number of columns :");
	scanf("%u",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	
	return 0;
	
}