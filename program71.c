// Accept string  from user and return length of that string

#include<stdio.h>
 int strlenX(char str[])
 {
	 int iCnt=0;
	while (*str != '\0')
	{
		
		iCnt++;
		str++;
	}
	return iCnt;
	
 }

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	// fgets(Arr,20,stdin);                
	
	iRet=strlenX(Arr);                               // Display(100)
	printf("String legth is : %d\n",iRet);
	
	return 0;
}