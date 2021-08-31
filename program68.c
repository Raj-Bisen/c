
/*
	create static character array in main function
	accept the string into that array
	pass that string to the function
	Function will perform the operation on that string

*/

#include<stdio.h>
 void Display(char str[])
 {
	printf("Characters from string are \n");
	 
	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}
 }                                     

int main()
{
	char Arr[20];
	
	printf("Enter your name\n");
	fgets(Arr,20,stdin);                    // Hello
	
	Display(Arr);                               // Display(100)
	return 0;
	
	
	
}