// Accept number from user anf check whether that number is even or odd.
// Input: 4
// Output: Its Even

//Input: 7
//Output: Its odd
////////////////////////////////////////////////////////////////////////////////
//
//			Function Name: CheckEven
//			Input:  Integer
//			Output: Boolean(True/False)
//			Description: It is used to check whether number is even or odd
//			Date: 03/03/2021
//			Author:Raj bisen
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
	if((iNo % 2)==0)
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
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	
	if(bRet==true)
	{
		printf("number is Even %d \n",iValue);
		
	}
	else
	{
		printf("number is odd %d \n",iValue);
	}
	







	return 0;
	
}
















