//Accept N numbers from user and return Sum of  numbers.
#include<stdio.h>
#include<stdlib.h>
int SumElements(int Arr[],int iLength)
{
	int i=0;
	int iSum=0;
	for(i=0;i<iLength;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;

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
	
	iRet=SumElements(arr,iSize);
	printf("Summation of elements is : %d\n",iRet);
	
	free(arr);

	return 0;
	
}