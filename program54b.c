// Input :       Row=4       col=4          
// output :  
/*

	*	*	*	*
	*	*	*
	*	*	
	*			
	
	
	4,1		4,2		4,3		4,4
	3,1		3,2		3,3		3,4      	 Logic : (i>=j)
	2,1		2,2		2,3		2,4
	1,1		1,2		1,3		1,4

		
*/

#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i=0, j=0;
	printf("\n");
	
       if(iRow!=iCol)
       {
	       return;
       }
	for( i=iRow ; i>=1 ;  i--)             // 1
	{
	
		for(j=1 ; j<=i ; j++)         // 2
		{
			
			printf("*\t");
			
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