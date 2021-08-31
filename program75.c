// Accept string  from user and findout number of Capitals in that string

#include<stdio.h>
 int CountCap(char str[])
 {
	int iCnt=0;
	if( str == NULL)
	{
		return 0;
	}
	while (*str != '\0')
	{
		if ((*str >= 'A')&&(*str <= 'Z'))
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
	
	           
	
	iRet=CountCap(Arr);                            
	printf("Frequency of  capitals  is : %d\n",iRet);
	
	return 0;
}