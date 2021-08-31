// Accept number from user and Check whether  5th bit of the number is on or off.
#include<stdio.h>
#include<stdbool.h>
// 	0	0	0	1	0	0	1	0	iNo                     (18)
//	0	0	0	1	0	0	0	0	IMask                 (00000010)
// 	0	0	0	1	0	0	0	0	iResult                5th bit is on
 bool CheckBit(unsigned int iNo) 
{
	unsigned int iMask=0x00000010;
	unsigned int Result=0;
	Result = iNo & iMask;
	
	if(Result == iMask)
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
	unsigned int iValue=0;
	bool  bRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("5th bit is on");
	}
	else
	{
		printf("5th bit is off");
	}

	return 0;
}


