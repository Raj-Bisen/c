
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
	 int iCnt=0;
	for( iCnt = 0 ; str[iCnt] != '\0' ; iCnt++ )
	{
		printf("%c\n",str[iCnt]);
		
	}
 }

int main()
{
	char Arr[10];
	
	printf("Enter your name\n");
	fgets(Arr,10,stdin);                    // Hello
	
	Display(Arr);                               // Display(100)
	return 0;
	
	
	
}