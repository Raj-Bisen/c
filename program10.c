// Accept number from user and display its table.
//Input: 4
//Output: 4 8 12 16 20 24 28 32 36 40 

//Input:5
//Output: 5 10 15 20 25 30 35 40 45 50 
/*
		Input 5
		
		5*1        5
		5*2       10  
		5*3       15  
		5*4        20 
		5*5        25
		5*6        30                      common                  5*___
 		5*7        35                       start                        1
		5*8        40                       End                         10
		5*9        45                       Displacement        1
		5*10      50

 */
#include<stdio.h>
void  DisplayTable(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	//         1                    2                      3
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		printf("%d \n",iNo*iCnt);   //4
	}
	
}

int main()
{
	int iValue=0;
	int bRet=0;
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	
	DisplayTable(iValue);
	return 0;
	
}
















