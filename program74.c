// Accept string  from user and findout number of a/A in that string

#include<stdio.h>
 int CountAa(char str[])
 {
	int iCnt=0;
	if( str == NULL)
	{
		return 0;
	}
	while (*str != '\0')
	{
		if ((*str == 'a')||(*str == 'A'))
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
	
	           
	
	iRet=CountAa(Arr);                            
	printf("Frequency of A/a  is : %d\n",iRet);
	
	return 0;
}