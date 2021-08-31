//10
//18 -37         (1+2+5+10)-(3+4+6+7+8+9)
//-19

#include<stdio.h>
int Difference(int iNo)
{
	int iCnt=0;
	int iSum1=0;
	int iSum2=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum1=iSum1+iCnt;
		}
		else
		{
			iSum2=iSum2+iCnt;
		}
		
	}
	return iSum1 - iSum2;
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet=Difference(iValue);
	printf("Difference is %d",iRet);
	
	return 0;
	

}