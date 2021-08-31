// Accept   numbers from user and display  frequency of 2nd number  
// Input: 75845      5
//Output : 2 
//Input: 89562        1
//output : 0
#include<stdio.h>
int DigitFrequency(int iNo,int i)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		
		iNo=-iNo;
	}
	if((i<0)||(i>9))
	{
		printf("Invalid digits\n");
		return 0;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit ==i) 
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;	
	printf("Enter  first number\n ");
	scanf("%d",&iValue1);
	
	printf("Enter the digit that u want to search \n ");
	scanf("%d",&iValue2);
	
	iRet=DigitFrequency(iValue1,iValue2);
	printf("Number  of given digits are  %d\n",iRet);
	
	return 0;
	
}
















