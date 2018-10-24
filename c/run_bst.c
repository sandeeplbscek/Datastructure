#include "bst.h"
#include<stdlib.h>
#include<stdio.h>
void main()
{
node *root=NULL;
root=insert(root,10);
root=insert(root,8);
root=insert(root,7);
root=insert(root,9);
root=insert(root,12);
root=insert(root,11);
root=insert(root,13);
inorder(root);
printf("\n");
root=deleteNode(root,9);
printf("\n");
inorder(root);
root=deleteNode(root,12);
inorder(root);
printf("\n");




}