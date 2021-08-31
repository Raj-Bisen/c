// Input :      5
// output : 1       *      2      *        3       *     4      *       5    *   
//Input:        9
//output:  
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
		
	}
	
	printf("\n");
	
	
}
int main()
{
	unsigned int iValue=0;
	printf("Enter number ");
	scanf("%u",&iValue);
	
	Pattern(iValue);
	return 0;
	
}