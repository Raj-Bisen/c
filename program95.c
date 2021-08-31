/////////////////////////////////////////////////////////////////////////////////
// Accept number from user and off 3rd and 7th bit of that number.
// Input :           69
// output :          1
// 1111	 1111	1111	1111	1111	1111	1011	1011
//	F	     F            F              F              F              F               B             B
// 69     0000	0000	0000	0000	0000	0000	0100	0101
/////////////////////////////////////////////////////////////////////////////////
unsigned int offBit(unsigned int iNo)
{
	unsigned int iMask=0xFFFFFFBB;
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


