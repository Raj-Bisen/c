// Accept string from user and copy string in reverse  format.
#include<stdio.h>

void strcpyX(char src[], char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return ;
	}
	int iCnt=0;
	while(*src != '\0')
	{
		src++;		iCnt++;
	}
	src--;
	while( iCnt > 0)
	{
		*dest = *src;
		*src--;
		*dest++;
		iCnt--;
	}
	*dest='\0';
}
int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter string \n");
	scanf("%[^'\n']s",arr);
	
	strcpyX(arr,brr);
	
	printf("After copy string is : %s\n",brr);
	
	return 0;
}