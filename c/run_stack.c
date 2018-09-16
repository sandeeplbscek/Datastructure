#include "stack.h"
#include<stdio.h>

void main()
{
	printf("enter the size of stack");
	int size;
	scanf("%d",&size);
	createstack(size);
	push(10);
	push(20);
	push(30);
	push(40);
	printf("Is full%d\n",isfull());
	printf("Is Empty%d\n",isempty());
	printf("Peek%d\n",peek());
	printf("POP=%d\n",pop());
	printf("POP%d\n",pop());
	printf("POP%d\n",pop());


}
