// Accept string  from user and Reverse  the string physically

#include<stdio.h>
 void Reverse(char str[] )
 {
	char *start , *end;
	char temp;
	if(str == NULL)
	{
		return ;
	}
	start = str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	 end--;
	while(start < end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}	
 }

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);  
	printf("Reverse string is : %s",Arr);
	return 0;
}