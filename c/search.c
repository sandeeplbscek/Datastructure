#include<stdio.h>
#include "sort.h"
void linearsearch(int a[],int size,int key)
{
	int i,flag=0;
	for(i=0;i<size;i++)
		{
			if(a[i]==key)
			{
			 flag=1;
			 break;

			}

		}
		
	if(flag==1)
		printf("Item found");
	else
		printf("Item not found");



}


void binarysearch(int a[],int size,int key)
{

	bubble_sort(a,size);
	int low=0,high=size-1,flag=0,mid;
	while(low<=high)
		{
		 
		 mid=(low+high)/2;
		 
		  if(a[mid]==key)
			{
			 flag=1;
			 break;

			}
		  else if(a[mid]<key)
			low=mid+1;
		  else
			high=mid-1;
		

                 
                
		 	

		}
	
		
	if(flag==1)
		printf("Item found");
	else
		printf("Item not found");



}