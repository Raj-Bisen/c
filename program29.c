// Accept   numbers from user and return smallest digit
// Input: 7521    
//Output : 1
//Input: 121    
//output : 1
#include<stdio.h>
int MinDigit(int iNo)
{
	int iDigit=0;
	int iMin=9;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
			if(iMin==0)
			{
				break;
			}
			
		}
		   
		iNo=iNo/10;
			
	}
	return iMin;
}
int main()
{
	int iValue=0;
	int iRet;	
	printf("Enter  first number\n ");
	scanf("%d",&iValue);
	
	
	
	iRet=MinDigit(iValue);
	printf("Min  digit is %d\n",iRet);
	
	return 0;
	
}
















