
//Accept two number from user and return the maximum and minimum number.

 /*
	START
		Accept first number as no1
		Accept Second number as no2
		
		if no1 is greater than no2
			then no1 is maximum
		otherwise
			no2 is maximum
	STOP
*/

  # include  "Header2.h"

 int main()
{
	int iNo1=0;
	int iNo2=0;
	int iRet=0;
	
	
	printf("Enter First number");
	scanf("%d",&iNo1);
	
	printf("Enter Second number");
	scanf("%d",&iNo2);
	
	iRet=Maximum(iNo1,iNo2);
	
	printf("Maximum number is : %d\n",iRet);
	
	
	return 0;	
	
}

 //  OS -> main -> Maximum -> main ->OS

