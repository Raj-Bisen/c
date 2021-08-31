// Accept string  from user and Reverse  the string 

#include<stdio.h>
 void strReverse(char str[] )
 {
	int iCnt=0;
	if( str == NULL)
	{
		return ;
	}
	while (*str != '\0')
	{
		
		iCnt++;
		str++;
	}
	str--;
	while(iCnt>0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
	
 }

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	strReverse(Arr);  
	
	return 0;
}