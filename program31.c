// Accept   numbers from user and return smallest digit
// Input: 7521    
//Output : 1
//Input: 121    
//output : 1
#include<stdio.h>
int MinDigit(unsigned long int iNo)                   //unsigned long int is 8 byte ie. 64 bits long max value 2^64
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
	unsigned long int iValue=0;
	int iRet;	
	printf("Enter  first number\n ");
	scanf("%d",&iValue);
	
	
	
	iRet=MinDigit(iValue);
	printf("Min  digit is %d\n",iRet);
	
	return 0;
	
}
















