// Accept   numbers from user and return its reverse numbers   
// Input: 7521     
//Output : 70 
//Input: 2222        
//output : 16
#include<stdio.h>
int ReverseDigit(int iNo)
{
	int iDigit=0;
	int iRev=0;
	if(iNo<0)
	{
		
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
		iRev=(iRev*10)+iDigit;
	}	
	return iRev;
}

int main()
{
	int iValue=0;
	
	int iRet=0;	
	printf("Enter  first number\n ");
	scanf("%d",&iValue);
	
	
	iRet=ReverseDigit(iValue);
	printf("Reverse  digit is : %d\n",iRet);
	
	return 0;
	
}
















