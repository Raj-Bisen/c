//Accept N numbers from user and return count  of even elements .
#include<stdio.h>
#include<stdlib.h>
int SumEvenElements(int Arr[],int iLength)
{
	int i=0;
	int iCnt=0;
	
	for(i=0; i< iLength; i++)
	{
		if((Arr[i]%2)==0)
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
	
	iRet=SumEvenElements(arr,iSize);
	printf("Even  elements from list are  : %d\n",iRet);
	
	free(arr);

	return 0;
	
}