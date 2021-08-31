//Accept N numbers from user and return Smallest value from  that N  number .
#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
	int i=0;
	int iMin=0;
	if(Arr==NULL)
	{
		return -1;
	}
	iMin=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
	}
	return iMin;
}
int main()
{
	int *arr=NULL;
	int i=0;
	int iSize=0;
	int iRet=0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements no :\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet=Minimum(arr,iSize);

	printf("Smallest number   is : %d\n",iRet);
	
	
	free(arr);

	return 0;
	
}