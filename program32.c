// Accept   numbers from user and return smallest digit
// Input: 7521    
//Output : 1
//Input: 121    
//output : 1
#include<stdio.h>
typedef unsigned long int ULONG; 
int MinDigit(ULONG iNo)                  
{
	int iDigit=0;
	int iMin=9;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		   
		iNo=iNo/10;
			
	}
	return iMin;
}





int main()
{
	ULONG iValue=0;
	int iRet;	
	printf("Enter  first number\n ");
	scanf("%lu",&iValue);
	
	
	
	iRet=MinDigit(iValue);
	printf("Min  digit is %d\n",iRet);
	
	return 0;
	
}
















