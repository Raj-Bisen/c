//Accept N numbers from user and display even numbers.
#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int arr[],int iSize)
{
	int i=0;
	if((arr == NULL)||(iSize<=0))
	{
		return;
	}
	printf("Even element from array are:\n");
	for(i=0;i<iSize;i++)
	{
		if((arr[i]%2)==0)
		{
			printf("%d\n",arr[i]);
		}
	}
	
}

int main()
{
	int *arr=NULL;
	int iLength=0;
	int i=0;
	
	printf("Enter the number of elements :\n");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength*sizeof(int));
	
	printf("Enter the elements :\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	DisplayEven(arr,iLength);
	
	free(arr);
	
	return 0;
}