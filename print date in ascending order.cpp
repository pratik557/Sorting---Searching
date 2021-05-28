
#include<stdio.h>
#include<stdlib.h>
struct Date 
{ 
    int day, month, year; 
};
void sortDates(struct Date arr[], int n) 
{
	int i,j,min,temp;
    for (i = 0; i < n-1; i++) 
    {
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j].year < arr[min].year) 
            min = j;
        if(arr[i].year<arr[min].year)
        {
        	temp=arr[min].year;
        	arr[min].year=arr[i].year;
        	arr[i].year=temp;
    	}
    }
    for (i = 0; i < n-1; i++) 
    {
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j].month < arr[min].month) 
            min = j;
        if(arr[i].month<arr[min].month)
        {
        	temp=arr[min].month;
        	arr[min].month=arr[i].month;
        	arr[i].month=temp;
    	}
    }
    for (i = 0; i < n-1; i++) 
    {
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j].day < arr[min].day) 
            min = j;
        if(arr[i].day<arr[min].day)
        {
        	temp=arr[min].day;
        	arr[min].day=arr[i].day;
        	arr[i].day=temp;
    	}
    }
}
int main() 
{
    int n,i;
    struct Date arr[n];
    printf("\nEnter no of dates: ");
    scanf("%d",&n);
    printf("\nEnter dates: ");
    for (i=0; i<n; i++) 
    	scanf("%d %d %d", &arr[i].day,&arr[i].month,&arr[i].year);
    sortDates(arr, n); 
    printf("Sorted dates are:\n"); 
    for (i=0; i<n; i++)
        printf("%d %d %d\n",arr[i].day,arr[i].month,arr[i].year);
}
