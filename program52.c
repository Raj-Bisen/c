// Input :       Row=4       col=4          
// output :  
/*
	A	
	
	A	B	
 
	A	B	C	
	
	A	B	C	D
		
				
		1,1                         
 j==1	2,1        2,2                   
		3,1        3,2        3,3                   
		4,1        4,2        4,3        4,4                
		
				i==iRow
*/

#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i=0, j=0;
	char ch='\0';
	printf("\n");
	
       if(iRow!=iCol)
       {
	       return;
       }
	for(i=1 ;i<=iRow;i++)             // 1
	{
	
		for(j=1,ch='A';j<=iCol;j++,ch++)         // 2
		{
			
			if(i>=j)
			{
				printf("%c\t",ch);
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