// Accept   numbers from user and return its factorial  using while Loop.
//Input: 5
//Output: 5*4*3*2*1       (120)

//Input: 4    
//Output: 4*3*2*1          (24)

/*
		        iNo=5
		        
				5*4*3*2*1
				1*2*3*4*5
	         	iMult=iMult*iCnt
		
	        	
*/

#include<stdio.h>
int Fact(int iNo)
{
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		
		iMult=iMult*iNo;
		iNo--;
	}
	return iMult;
}

int main()
{
	int iValue=0;
	
	int iRet=0;
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	
	iRet=Fact(iValue);
	printf("Factorial  of number is %d \n :",iRet);
	
	return 0;
	
}
















