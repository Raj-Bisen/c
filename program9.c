/* 
		0 to 35           Fail
		35 to 50        Pass class
		50 to 60        second class
		60 to 70        First class
		70 to 100      Distinction 
*/

#include<stdio.h>
void  CheckResult(int iMarks)
{
	if((iMarks<0) || (iMarks>100))
	{
		printf("Invalid marks \n");
		return;
	}
	if((iMarks>=0)&&(iMarks<35))
	{
		printf("You are failed  \n");
	}
	else if((iMarks>=35)&&(iMarks<50))
	{
		printf("Pass class  \n");
	}
	else if((iMarks>=50)&&(iMarks<60))
	{
		printf("Second class  \n");
	}
	else  if((iMarks>=60)&&(iMarks<70))
	{
		printf("Frist class\n");
	}
	else 
	{
		printf("distinction \n");
	}
	
	
	
	
	
}

int main()
{
	int iValue=0;
	int iMarks=0;
	int bRet=0;
		
	printf("Enter number ");
	scanf("%d",&iValue);
	
	
	CheckResult(iValue);
	






	return 0;
	
}
















