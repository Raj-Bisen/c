
#include<stdio.h>
int Frequency(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet=Frequency(iValue);
	printf("Frequency of 2 is %d",iRet);
	
	return 0;
	

}