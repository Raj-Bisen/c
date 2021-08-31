// Accept string  from user and findout Count white spaces   in that string

#include<stdio.h>
 int CountWhiteS(char str[])
 {
	int iCnt=0;
	if( str == NULL)
	{
		return 0;
	}
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			iCnt++;
			
		}
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
	
	           
	
	iRet=CountWhiteS(Arr);                            
	printf("Frequency of  White space   is : %d\n",iRet);
	
	return 0;
}