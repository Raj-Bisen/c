//Accept N numbers from user and display that number.
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)                                                    //step6
{
	int i=0;
	printf("Elements from the array are : \n");
	for(i=0;i<iSize;i++)
	{
		printf("%d\n",Arr[i]);
	}
}
int main()
{
	int *arr=NULL;                                                                     //step1
	int iLength=0;
	int i=0;
	
	printf("Enter the number of elements : \n");                  //step2
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength * sizeof(int));                          //step3
	
	printf("Enter the elements :\n");        	                      //step4
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Display(arr,iLength);                                                          //step5
	
	free(arr);                                                                             //step7
	
	return 0;
}