#include<stdio.h>

int main()
{
	int arr[10],n,i,j,temp;
	printf("Enter the number of the array");
	scanf("%d",&n);
	printf("Enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d,",&arr[i]);
	}
	for(i=1;i<n;i++)//here,i is considered as unsorted array so,i=1 cause we know that in insertion sort a[o] is always sorted.
	{
		temp=arr[i]; //here,we put the value of unsorted array to compare with sorted array
		j=i-1;                      
//here,j is an sorted array so we always consider it as i-1 cause j start from 0 and helps to compare with the unsorted array.
	while(j>=0 && arr[j]>temp)
	//here both condition should be true if j will be greater then only the loop decreased j-- 
	{
		arr[j+1]=arr[j];//if value of a[j] will be greater then value of temp then value of j will push to j+1
		j--;
	}
	arr[j+1]=temp;//if temp value is greater than j then simply placed it into array of j+1 
	}
	return 0;
}
//once look youtube jennys lecture if you have any doubt.
