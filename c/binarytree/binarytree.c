#include<stdlib.h>
#include<stdio.h>
#include"Queue.h"

node_tree* createnode_tree()
{
        node_tree *newnode;
	newnode=malloc(sizeof(node));
	return newnode;
}

node_tree* insert(node_tree *root,int data)
{
	node_tree *newnode=createnode_tree();
	newnode->value=data;
	
	
	if(root==NULL)
		{
		
		root=newnode;
		root->left=NULL;
		root->right=NULL;
		
		}
	else
		{
		node *head=createqueue();
		enqueue(head,root);
		while(head->link!=NULL)
			{
			
			 node_tree *current=dequeue(head);
			
			 if(current->left==NULL)
				{
				current->left=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
				break;
				}
			 else if(current->right==NULL)
				{
				current->right=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
				break;
				}
			else
				{
				enqueue(head,current->left);
				enqueue(head,current->right);
				}
			
			 
			}
		

		}
return root;
}

void inorder(node_tree *root)
{
   
  	
	if(root!=NULL)
 		{
		inorder(root->left);	
		printf("%d ",root->value);
		inorder(root->right);	

		}
}



/*  
node* inorder_successor(node *current) 
{ 
    
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  

node* deleteNode(node *root, int key) 
{ 
    
    if (root == NULL) return root; 
  
    if (key < root->value) 
        root->left = deleteNode(root->left, key); 
    else if (key > root->value) 
        root->right = deleteNode(root->right, key); 
     
    else
    { 
        if (root->left == NULL) 
        { 
            node *temp=root->right;
	    free(root);
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
	    node *temp=root->left; 
	    free(root);
            
            return temp; 
        } 
  
        struct node* temp = inorder_successor(root->right); 
        root->value = temp->value; 
    
        root->right = deleteNode(root->right, temp->value); 
    } 
    return root; 
} 

*/





