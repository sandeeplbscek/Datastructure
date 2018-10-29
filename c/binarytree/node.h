#ifndef MY_NODE
#define MY_NODE
typedef struct node_tree
{
 int value;
 struct node_tree *left;
 struct node_tree *right;

}node_tree;

typedef struct node
{

	node_tree *data;
	struct node *link;
}node;
#endif