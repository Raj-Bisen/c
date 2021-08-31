//Accept number from user and Check whether 3rd ,  5th , 7th  bit of the number is on or off.
// input :                   93
// output :                true
#include<stdio.h>
#include<stdbool.h>
// 	0	1	0	1	0	1	0	0	iNO
//	0	1	0	1	0	1	0	0	IMask: 0x00000054
// 	0	1	0	1	0	1	0	0	iResult
 bool CheckBit(unsigned int iNo) 
{
	unsigned int iMask=0x00000054;
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
		printf("3,5,7 bits are on");
	}
	else
	{
		printf(" bits are  off");
	}

	return 0;
}


