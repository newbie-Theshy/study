#include<stdio.h>
#define ARR_Len 255
#define elemType int
void function(elemType arr[],int len)
{   elemType temp;
	int i,j;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
	if(arr[j]>arr[j+1])
	{	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
		}
	}
	}
}
void main()
{
	int len=10;
	elemType arr[ARR_Len]={3,6,7,9,14,23,56,2,8,1};
	int i;
	function(arr,len);
	for(i=0;i<len;i++)

		printf("%d\t",arr[i]);
		putchar('\n');
}