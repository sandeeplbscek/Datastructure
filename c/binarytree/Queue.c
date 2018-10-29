#include<stdio.h>
#include "SinglyLinkedList.h"

node* createqueue()
{
node *head=createhead();
return head;
}

void enqueue(node *head,node_tree *node)
{
  insertfirst(head,node);
}

node_tree* dequeue(node *head)
{
 return(deletefirst(head));
}




