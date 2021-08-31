//Accept N numbers from user and return frequency of that number.
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iValue)
{
	int i=0;
	int iCnt=0;
	
	for(i=0; i< iLength; i++)
	{
		if((Arr[i]==iValue))
		{
			iCnt++;
		}
	}
	return iCnt;
	

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
	
	iRet=Frequency(arr,iSize,iNo);
	printf("Frequency is : %d\n",iRet);
	
	free(arr);

	return 0;
	
}