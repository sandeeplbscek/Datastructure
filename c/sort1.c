#include<stdio.h>
void merge(int a[],int first,int mid, int last)
{
int first1=first;
int last1=mid;
int first2=mid+1;
int last2=last;
int i=first;
int temp[100];
printf("first1=%dfirst2=%dlast1=%dlast2=%d\n",first1,first2,last1,last2);
while((first1<=last1)&&(first2<=last2))
{
	
	if(a[first1]<a[first2])
		{
		temp[i]=a[first1];
		i=i+1;
		first1=first1+1;
		}
	if(a[first1]>a[first2])
	{
	temp[i]=a[first2];
	i=i+1;
	first2=first2+1;
	}
	if(a[first1]==a[first2])
	{
	temp[i]=a[first1];
	i=i+1;
	temp[i]=a[first2];
	i=i+1;
	first1=first1+1;
	first2=first2+1;
	}
}
while(first1<=last1)
{
temp[i]=a[first1];
i=i+1;
first1=first1+1;
}
while(first2<=last2)
{
temp[i]=a[first2];
i=i+1;
first2=first2+1;
}
for(int j=first;j<=last;j++)
	{
	a[j]=temp[j];
	printf("a[%d]=%d\n",j,a[j]);
	}
}





void mergesort(int a[],int first,int last)
{
	if(first<last)
		{
		int mid=(first+last)/2;
		printf("mid=%d",mid);
		mergesort(a,first,mid);
		mergesort(a,mid+1,last);
		merge(a,first,mid,last);
		}
}
