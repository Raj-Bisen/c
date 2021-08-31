// Accept   numbers from user and return the perfect number on screen 

#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
	
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
		if(iSum==iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	
		
}

int main()
{
	int iValue=0;
	bool bRet=0;
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	
	bRet=CheckPerfect(iValue);
	if(bRet==true)
	{
		printf("%d is perfect number \n",iValue);
		
	}
	else
	{
		printf("%d is not perfect number \n",iValue);
	}
	
	return 0;
	
}
















