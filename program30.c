// Accept   numbers from user and return largest digit
// Input: 7521
//Output : 7
//Input: 121    
//output : 2
#include<stdio.h>
int MaxDigit(int iNo)
{
	int iDigit=0;
	int iMax=0;
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
			if(iMax==9)
			{
				break;
			}
		}
		   
		iNo=iNo/10;
			
	}
	return iMax;
}





int main()
{
	int iValue=0;
	int iRet;	
	printf("Enter  first number\n ");
	scanf("%d",&iValue);
	
	
	
	iRet=MaxDigit(iValue);
	printf("Min  digit is %d\n",iRet);
	
	return 0;
	
}
















