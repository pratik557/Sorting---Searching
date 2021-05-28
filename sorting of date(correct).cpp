#include<stdio.h>
#include<stdlib.h>

struct day
{
	int yy;
	int mm;
	int dd;
	int joined;
};
int main()
{
	int n,i;
	printf("Enter the number of the day \n");
	scanf("%d",&n);
	struct day a[n];
	printf("Enter the date in dd/mm/yy");
	for(i=0;i<n;i++);
	{
		scanf("%d",&a[i].dd);
		scanf("%d",&a[i].mm);
		scanf("%d",&a[i].yy);
	}
	for(i=0;i<n;i++)
	{
		int x=a[i].yy;
		x=a[i].mm;
		x=a[i].yy;
		a[i].joined=x;
	}
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j].joined>a[j+1].joined)
			{
				struct day temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The date after sorting : \n");
	for(i=0;i<n;i++)
	{
		printf("%d,%d,%d",a[i].dd,a[i].mm,a[i].yy,a[i].joined);
	}
	return 0;
}
