// Accept string  from user and findout number of Small letters  in that string

#include<stdio.h>
 int CountSmall(char str[])
 {
	int iCnt=0;
	if( str == NULL)
	{
		return 0;
	}
	while (*str != '\0')
	{
		if ((*str >= 'a')&&(*str <= 'z'))
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
	
	           
	
	iRet=CountSmall(Arr);                            
	printf("Frequency of  small  is : %d\n",iRet);
	
	return 0;
}