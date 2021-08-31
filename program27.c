// Accept   numbers from user and Check whether that number is palindrome or not
// Input: 7521    
//Output : False
//Input: 121    
//output : True
#include<stdio.h>
#include<stdbool.h>  
bool CheckPalindrome(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int iTemp=0;
	if(iNo<0)
	{
		
		iNo=-iNo;
	}
	iTemp=iNo;
	while(iNo>0)
	{	
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10 ;
	}
	if(iRev==iTemp)
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
	bool bRet;	
	printf("Enter  first number\n ");
	scanf("%d",&iValue);
	
	
	
	bRet=CheckPalindrome(iValue);
	if (bRet==true)
	printf("It is palindrome");
	else
	printf("it is not palindrome");	
	
	return 0;
	
}
















