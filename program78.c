// Accept string  from user and convert lower case to upper

#include<stdio.h>
 void strUprX(char str[])
 {
	
	if( str == NULL)
	{
		return ;
	}
	while (*str != '\0')
	{
		if ((*str >= 'a')&&(*str <='z'))
		{
			*str=*str - 32;
			
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
	
	strUprX(Arr);                            
	printf("Updated string  is : %s\n",Arr);
	
	return 0;
}