// Accept number and position  from user and Check whether that number of bit  is on or off.
#include<stdio.h>
#include<stdbool.h>
// 	0	1	0	1	0	1	0	0	iNO
//	0	1	0	1	0	1	0	0	IMask: 
// 	0	1	0	1	0	1	0	0	iResult
 bool CheckBit(unsigned int iNo,int iPos) 
{
	unsigned int iMask=0x00000001;
	unsigned int Result=0;
	if((iPos < 1)||(iPos > 32))
	{
		return false;
	}
	iMask = iMask << (iPos - 1);
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
	int iPos=0;
	bool  bRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	printf("Enter  Position\n ");
	scanf("%d",&iPos);
	
	bRet=CheckBit(iValue,iPos);
	
	if(bRet == true)
	{
		printf("Bits are on");
	}
	else
	{
		printf(" Bits are  off");
	}

	return 0;
}


