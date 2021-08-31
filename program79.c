// Accept string  from user and convert upper case to lower

#include<stdio.h>
 void strlwrX(char str[])
 {
	
	if( str == NULL)
	{
		return ;
	}
	while (*str != '\0')
	{
		if ((*str >= 'A')&&(*str <='Z'))
		{
			*str=*str + 32;
			
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
	
	strlwrX(Arr);                            
	printf("Updated string  is : %s\n",Arr);
	
	return 0;
}