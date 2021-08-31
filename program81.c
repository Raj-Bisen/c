// Accept string  from user and toggle the string 

#include<stdio.h>
 void strtoggleX(char str[])
 {
	
	if( str == NULL)
	{
		return ;
	}
	while (*str != '\0')
	{
		if ((*str >= 'A')&&(*str <='Z'))
		{
			*str=*str + ('a' - 'A');
			
		}
		else if((*str>='a')&&(*str<='z'))
		{
			*str=*str - ('a' - 'A');
		}
		str++;
	}
	
 }

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	strtoggleX(Arr);                            
	printf("Updated string  is : %s\n",Arr);
	
	return 0;
}