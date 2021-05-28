#include<stdio.h>

int main()
{
	int arr[20],i,n,j,temp;
	printf("enter the number of the elemnet in array : ");//total no. of element to be printed
	scanf("%d",&n);
	printf("enter the element of an array\n");
	for(i=0;i<n;i++)//element you want to enter in an array
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];//swapping is done for the arrangement of number in ascending order.
				arr[j+1]=temp;
			}
		}
	}
	printf("The array sorted in ascending order is : \n");
	for(i=0;i<n;i++)//loop is used to print the sorted element
	printf("%d ,",arr[i]);
	return 0;
}
