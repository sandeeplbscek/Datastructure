/*
linear search(a,k)
for i=0 to s-1
  if(a[i]==k)
	  return 1
end for
return 0
end linearsearch
*/
#include<stdio.h>
// k element to be searched, s size of array

int linearsearch(int a[],int s,int k)
{
	for(int i=0;i<s;i++)
	{
		if(a[i]==k)
			return 1;
	}
	return 0;
	
	
}

void main()
{
	printf("enter the size of array");
	int s;
	scanf("%d",&s);
	int a[s];
	printf("enter the element to the array");
	for(int i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	int k;
	scanf("%d",&k);
	int flag=linearsearch(a,s,k);
	if(flag)
		printf("element found");
	else
		printf("element not found");
	
	
}

