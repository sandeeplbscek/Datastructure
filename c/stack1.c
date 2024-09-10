#include<stdio.h>
#include<stdlib.h>
int *stack;
int top=-1;
int size;
void createstack(int s)
{
	size=s;
	stack=malloc(sizeof(size));
	
}




int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
	
}

int isfull()
{
	if(top==size-1)
		return 1;
	else
		return 0;
	
}




void push(int item)
{
	if(isfull())
		printf("stack is full");
	else
		stack[++top]=item;
	
}

int pop()
{
	if(top==-1)
		printf("stack empty");
	else
		return stack[top--];
	
}

int peek()
{
	if(isempty())
		printf("stack empty");
	else
		return stack[top];
	
}







void main()
{
	printf("enter the size of stack");
	int s,ch,item;
	scanf("%d",&s);
	createstack(s);
	while(1)
	{
		printf("enter the choice 1.push 2.pop 3.peek 4.isempty 5.isfull");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter the element to be pushed");
			        scanf("%d",&item);
					push(item);
					break;
			case 2: item=pop();
					printf("Poped item is %d",item);
			        break;
			case 3: item=peek();
					printf("Peeked item is %d",item);
			        break;
			case 4: item=isempty();
			        if(item==1)
						printf("Stack empty");
					else
						printf("Stack not empty");
			        break;
			case 5: item=isfull();
			        if(item==1)
						printf("Stack full");
					else
						printf("Stack not full");
			        break;
			default: exit(0);
								
			
			
			
		}
		
		
		
	}
	
	
	
	
	
	
}



