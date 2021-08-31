// Accept   numbers from user and return the addition of digits.
// Input: 7521
//Output : 15          (7+5+2+1)



#include<stdio.h>

int  SumDigit(int iNo)
{
	
	int iDigit=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
		iSum=iSum+iDigit;
	}
	
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;	
	printf("Enter number ");
	scanf("%d",&iValue);
	
	iRet=SumDigit(iValue);
	printf("Sum is : %d",iRet);
	
	
	return 0;
	
}
















