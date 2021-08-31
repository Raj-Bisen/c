//  Accept number and Position from user and  Toggle that number of bit .
#include<stdio.h>
#include<stdbool.h>
// 	0	1	0	1	0	1	0	0	iNO
//	0	1	0	1	0	1	0	0	IMask: 
// 	0	1	0	1	0	1	0	0	iResult
int ToggleBit(unsigned int iNo,int iPos) 
{
	unsigned int iMask=0x00000001;
	unsigned int Result=0;
	if((iPos < 1)||(iPos > 32))
	{
		return false;
	}
	iMask = iMask << (iPos - 1);
	Result = iNo ^ iMask;
	
	return Result;
	
}

int main()
{
	unsigned int iValue=0;
	int iPos=0;
	int  iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	printf("Enter  Position\n ");
	scanf("%d",&iPos);
	
	iRet=ToggleBit(iValue,iPos);
	printf("Updated number  is :%u \n",iRet);
	

	return 0;
}


