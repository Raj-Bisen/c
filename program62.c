//Accept N numbers from user and return 1st occurence  of that  number .
#include<stdio.h>
#include<stdlib.h>
int FirstOccurence(int Arr[],int iLength,int iValue)
{
	int i=0;
	for(i=0 ; i<iLength ; i++)
	{
		if(Arr[i]==iValue)
		{
			break;
		}
	}
		if(i == iLength)
		{
			return 0;
		}
		else
		{
			return i;
		}
}
int main()
{
	int *arr=NULL;
	int i=0;
	int iNo=0;
	int iSize=0;
	int iRet=0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	printf("Enter element that u want to search\n");
	scanf("%d",&iNo);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements no :\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet=FirstOccurence(arr,iSize,iNo);
	if(iRet == -1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("First occurence  is : %d\n",iRet);
	}
	free(arr);

	return 0;
	
}