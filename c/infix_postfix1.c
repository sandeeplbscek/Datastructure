#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *stack;
int top=-1;
int size;
char output[100];
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




void push(char item)
{
	if(isfull())
		printf("stack is full");
	else
		stack[++top]=item;
	
}

char pop()
{
	if(top==-1)
		printf("stack empty");
	else
		return stack[top--];
	
}

char peek()
{
	if(isempty())
		printf("stack empty");
	else
		return stack[top];
	
}
int precedence(char temp)
{
	if(temp=='(')
		return 0;
	if(temp=='+'||temp=='-')
		return 1;
	else if(temp=='*'||temp=='/')
		return 2;
	else if(temp=='^')
		return 3;
	
	
}



void infix_postfix(char a[100])
{
	int len=strlen(a);
	int i=0,j=0;
	createstack(len);
	while(a[i]!='\0')
	{
		char t=a[i];
		if(t=='(')
			push(a[i]);
		else if((t=='+')||(t=='-')||(t=='*')||(t=='/')||(t=='^'))
			{
			if(!isempty())
				{
				while(precedence(t)<=precedence(peek()))
					{
					output[j]=pop();
					j++;
					if(isempty())
						break;
					}
				}
			push(t);
			}
		else if(t==')')
			{
				while(!isempty())
					{
					char temp=pop();
					if(temp!='(')
						{
						output[j]=temp;
						j++;
						}
					else
						break;
					}
			}
		else
			{
			output[j]=t;
			j++;
			}
		i++;
	}
	while(!isempty())
		{
		output[j]=pop();
		j++;
		}
		output[j]='\0';
}



void main()
{
	
	printf("enter the infix expression");
	char input[100];
	scanf("%s",input);
	infix_postfix(input);
	printf("%s",output);
		
}



