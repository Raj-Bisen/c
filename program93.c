//return count of bit.without if condition.
#include<stdio.h>
int CountyOne(unsigned int iNo)
{
	unsigned int iDigit=0;
	int iCnt=0;
	while(iNo)
	{
		iDigit=iNo%2;
		printf("%u\t",iDigit);
		
		iCnt+= iDigit;
		
		iNo=iNo/2;
	}
	return iCnt;
	
	
}

int main()
{
	unsigned int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet=CountyOne(iValue);
	
	printf("Number of on bits are :  %d\n",iRet);

	return 0;
}


