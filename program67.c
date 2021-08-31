
/*
	create static character array in main function
	accept the string into that array
	pass that string to the function
	Function will perform the operation on that string

*/

#include<stdio.h>

int main()
{
	char Arr[40];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	// fgets(Arr,40,stdin);             // fgets (kashat , kiti , kuthun )
	// gets(Arr);
	// scanf("%s",Arr);
	
	printf("Your name is : %s ",Arr);
	
	return 0;
	
	
	
}