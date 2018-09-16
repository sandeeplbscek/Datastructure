#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
int size,top=-1,*a;
void createstack(int s)
{
size=s;
a=malloc(sizeof(size));
}
bool isempty()
{
	if(top==-1)
		return true;
	else
		return false;
}
bool isfull()
{
	if(top==size)
		return true;
	else
		return false;
}

void push(int item)
{
	if(isfull())
		{
		 printf("stack full");

		}
	else
		{
		  a[++top]=item;	
		
		}

}



int pop()
{
	if(isempty())
		{
		 return 0;;

		}
	else
		{
		  return a[top--];	
		
		}

}



int peek()
{
	if(isempty())
		return 0;
	else
		return a[top];
}
