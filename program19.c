// Accept   numbers from user and Display the digits of tha number in reverse the number on screen

#include<stdio.h>

void  DisplayDigit(int iNo)
{
	
	int iDigit;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
	
}

int main()
{
	int iValue=0;
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;
	
}
















