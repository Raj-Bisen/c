// Accept number from user and off  3rd bit from that number.
// input :  	20
// output :      16

#include<stdio.h>
unsigned int offBit(unsigned int iNo)
{
	unsigned int iMask=0xFFFFFFFB;
	unsigned int Result=0;
	
	Result=iNo & iMask;
	
	return Result;
	
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=offBit(iValue);
	printf("Number after updation is : %d\n",iRet);

	return 0;
}


