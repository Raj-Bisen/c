// Accept number from user and display 
// Input: 4
// Output: 10(1+2+3+4)

//Input: -6
//Output:21 (1+2+3+4+5+6)

#include<stdio.h>
int Sum(int iNo)
{	
	iCnt=0
		for (iCnt=1;iCnt<=4;iCnt++)
		{
			printf("%d",iCnt);
		}
	
	
}
int main()
{
	int iNo=0;
	int iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iNo);
	
	iRet=Sum(iNo);
	
	printf("Addition is : %d \n",iRet);
	return 0;
	
	
	
	
	
}