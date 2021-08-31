//Accept N numbers from user and return last occurence   of that  number .
#include<stdio.h>
#include<stdlib.h>
int LastOccurence(int Arr[],int iLength,int iValue)
{
	int i=0;
	for(i=iLength=1; i>=0 ; i--)
	{
		if(Arr[i]==iValue)
		{
			break;
		}
	}
	return i;
	
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
	
	printf("Enter element that u want to seaarch\n");
	scanf("%d",&iNo);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements no :\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet=LastOccurence(arr,iSize,iNo);
	if(iRet==-1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("Last occurence  is : %d\n",iRet);
	}
	
	free(arr);

	return 0;
	
}