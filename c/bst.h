typedef struct node
{

	int value;
	struct node *left;
	struct node *right;
		
}node;


struct node* createnode();
node* insert(node *root,int data);
void inorder(node *root);
node* deleteNode(node *root, int key);
node* inorder_successor(node *current);


