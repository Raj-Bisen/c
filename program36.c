//4
// -4    -3   -2    -1    0   1    2    3    4 
#include<stdio.h>
void NumberLine(int iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
		
	}
	printf("\n");
	
	
}
int main()
{
	int iValue1=0;
	int iRet=0;
	printf("Enter number \n");
	scanf("%d",&iValue1);
	
	NumberLine(iValue1);
	
	return 0;

	
	
	
	
	
	
	
	
}