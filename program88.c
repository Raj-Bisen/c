// Accept string from user and copy string and convert it into small string. 
#include<stdio.h>

void strcpysmallX(const char src[], char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return ;
	}
	int iCnt=0;
	while(*src != '\0')
	{
		if((*src >= 'A')&&(*src <= 'Z'))
		{
			*dest=*src + 32;
		}
		else
		{
			*dest = *src;
		}
		src++;
		dest++;
		
	}
	*dest='\0';
}
int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	strcpysmallX(arr,brr);
	
	
	printf("After copy small string is : %s\n",brr);
	
	return 0;
}