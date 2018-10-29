#include<stdlib.h>
#include<stdio.h>
#include"node.h"
node* createhead()
{
	node *head;
	head=malloc(sizeof(node));
	head->link=NULL;
	return head;
}

node* createnode()
{
        node *newnode;
	newnode=malloc(sizeof(node));
	return newnode;
}



void insertfirst(node *head,node_tree *node1)
{
	node *newnode=createnode();
	newnode->data=node1;
	if(head->link==NULL)
		{
		head->link=newnode;
		newnode->link=NULL;

		}
	else
		{
		newnode->link=head->link;
		head->link=newnode;

		}

}

node_tree* deletefirst(node *head)
{
   node_tree *temp=NULL;
	if(head->link!=NULL)
	{
	  temp=head->link->data;
	  head->link=head->link->link;
	  

	}
return temp;




}








