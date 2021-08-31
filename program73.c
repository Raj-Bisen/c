// Accept string  from user and findout frequency of small a  in that string

#include<stdio.h>
 int Counta(char str[])
 {
	int iCnt=0;
	if( str == NULL)
	{
		return 0;
	}
	while (*str != '\0')
	{
		if ((*str == 'a'))
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
	
	           
	
	iRet=Counta(Arr);                            
	printf("Frequency of a  is : %d\n",iRet);
	
	return 0;
}