#include "binarytree.h"
#include<stdlib.h>
#include<stdio.h>
void main()
{
node_tree *root=NULL;
root=insert(root,10);
root=insert(root,8);
root=insert(root,7);
root=insert(root,9);
root=insert(root,12);
root=insert(root,11);
root=insert(root,13);
inorder(root);
printf("\n");

}