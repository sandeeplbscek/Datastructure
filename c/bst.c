#include<stdlib.h>
#include<stdio.h>
typedef struct node
{

	int value;
	struct node *left;
	struct node *right;
		
}node;



node* createnode()
{
        node *newnode;
	newnode=malloc(sizeof(node));
	return newnode;
}

node* insert(node *root,int data)
{
	node *newnode=createnode();
	
	
	if(root==NULL)
		{
		
		root=newnode;
		root->value=data;
		root->left=NULL;
		root->right=NULL;
		
		}
	else
		{
		
		node *current=root;
		node *prev=root;
		int flag=0;
		while(current!=NULL)
			{
			if(current->value>data)
				{
				prev=current;
				current=current->left;
				flag=1;
				}
			else
				{
				prev=current;
				current=current->right;
				flag=2;
				}
			}
		newnode->value=data;
		
		
		if(flag==1)
			{
			 	prev->left=newnode;
				
				newnode->left=NULL;
				newnode->right=NULL;
			}
		else
			{
				prev->right=newnode;
				newnode->left=NULL;
				newnode->right=NULL;
			}

	}
return root;
}

  
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







void inorder(struct node *root)
{
   
  	
	if(root!=NULL)
 		{
		inorder(root->left);	
		printf("%d ",root->value);
		inorder(root->right);	

		}
}
