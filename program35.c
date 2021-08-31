// Input : 89451
// output : 8 (9-1)
// Input : 5672
// output : 5   (7-2)

#include<stdio.h>
int MaxMin(int iNo)
{
	int iDigit=0;
	int iMax=0;
	int iMin=9;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		if(iMin>iDigit)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
	}
		return iMax-iMin;
}
int main()
{
	int iValue1=0;
	int iRet=0;
	printf("Enter number \n");
	scanf("%d",&iValue1);
	
	iRet=MaxMin(iValue1);
	printf("Difference is %d",iRet);
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
