//Accept N numbers from user and chech whether  numbers contains 11  in it or not .
// INPUT : 2  3   5  23    11
//OUTPUT : 11 is present
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[],int iLength)
{
	int i=0;
	if(Arr==NULL)
	{
		return false;
	}
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			break;
		}
	}	
	if(i==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int *arr=NULL;
	int i=0;
	int iSize=0;
	bool bRet=false;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements no :\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bRet=Search(arr,iSize);
	if(bRet==true)
	{	
		printf("11 is present \n");
	}
	else
	{
		printf("11 is not present\n");
	}
	
	free(arr);

	return 0;
	
}