// Accept   numbers from user and return the addition of its factor
//Input: 6
//Output: 1 + 2 + 3          


/*
		        iNo=6
		     
			if (6%1)==0 +            1 
			if (6%2)==0              2 
            if(6%3)==0			      3
			
	        	
*/

#include<stdio.h>
int FactorsSum(int iNo)
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
		return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	
	iRet=FactorsSum(iValue);
	printf("Summation is : %d\n",iRet);
	
	return 0;
	
}
















