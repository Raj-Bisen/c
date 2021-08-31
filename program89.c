// Accept string from user and Concat the string. 
#include<stdio.h>

void strConcatX(char src[], char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return ;
	}
	while(*dest != '\0')
	{
		dest++;
	}
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
		
}
int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter  first string \n");
	scanf("%[^'\n']s",arr);                              //Demo
	
	printf("Enter second string \n");
	scanf(" %[^'\n']s",brr);                              //Hello
	
	strConcatX(arr,brr);
	
	printf("After concat string is : %s\n",brr);                 // HelloDemo
	
	return 0;
}