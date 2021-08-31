///////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and toggle 3rd bit of that number
#include<stdio.h>
//        1111	 1111	1111	1111	1111	1111	1111	1111
//	     F	             F             F              F              F              F               F             F
//     0000	0000	0000	0000	0000	0000	0000	0100	
unsigned int ToggleBit(unsigned int iNo)
{
	unsigned int iMask=0x00000004;
	unsigned int Result=0;
	
	Result=iNo ^ iMask;
	
	return Result;
	
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=ToggleBit(iValue);
	printf("Number after updation is : %d\n",iRet);

	return 0;
}


