// Accept string from user and copy string and convert it into Capital string. 
#include<stdio.h>

void strcpycapX(char src[], char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return ;
	}
	int iCnt=0;
	while(*src != '\0')
	{
		if((*src >= 'a')&&(*src <= 'z'))
		{
			*dest=*src-32;
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
	
	strcpycapX(arr,brr);
	
	
	printf("After copy capital string is : %s\n",brr);
	
	return 0;
}