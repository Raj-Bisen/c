// Accept number from user anf check whether that number is divisible by 3 and 5.
// Input: 10
// Output: No

//Input: 15
//Output: Yes

////////////////////////////////////////////////////////////////////////////////
//
//			Function Name: CheckDivisible
//			Input:  Integer
//			Output: Boolean(True/False)
//			Description: It is used to check whether number is even or odd
//			Date: 03/03/2021
//			Author:Raj bisen
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo)
{
	if(((iNo%3)==0)&&((iNo%5)==0))
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
	int iValue1=0;
	
		bool bRet;
		
	
	printf("Enter number ");
	scanf("%d",&iValue1);
	
	bRet=CheckDivisible(iValue1);
	
	if(bRet==true)
	{
		printf("%d is divisible by 3 and 5  \n",iValue1);
		
	}
	else
	{
		printf("%d is  not divisible by 3 and 5   \n",iValue1);
	}
	
	return 0;
	
}
















