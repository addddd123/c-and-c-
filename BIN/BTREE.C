#include<stdio.h>
#include<conio.h>
struct tree{
    struct tree *left,*right;
    int data;
};
int key;
struct tree *btree=NULL;
struct tree *insert(struct tree *btree,int data);
void inorder(struct tree *btree);
void preorder(struct tree *btree);
void postorder(struct tree *btree);
void search(struct tree *btree,int);
struct node* deletenode(struct node* , int key)
void main()
{
    int digit;
    int ch;
    clrscr();
    puts("enter data ,0 to quit");
    scanf("%d",&digit);
    while(digit!=NULL)
    {
	btree=insert(btree,digit);
	scanf("%d",&digit);
    }
    while(1)
    {
  //  clrscr();
	puts("\n1.inorder\n2 pre,\n3 posttorder,\n4 search\n5 exit");

    scanf("%d",&ch);
    switch(ch)
     {
	case 1:puts("\n inorder traversing is ");
	inorder(btree);
	break;
	case 2:
	printf("\n preorder");
	preorder(btree);
	break;
	case 3:
	puts("\n postorder");
      postorder(btree);
	break;
	case 4:
	//printf("enter elemnt u want to search");
     // scanf("%d",&key);
	  //search(btree,key);
	  btree= deletenode(struct node* btree, int key)
	  
	     break;
	default:
	       exit(0);

     }

    }
   // getch();
}
struct tree *insert(struct tree *btree,int digit)
{
    if(btree==NULL)
    {
	btree=(struct tree *)malloc(sizeof(struct tree));
	btree->left=btree->right=NULL;
	btree->data=digit;
    }
    else
    {
	if(digit<btree->data)
	btree->right=insert(btree->right,digit);
	else

	 if(digit>btree->data)
	btree->left=insert(btree->left,digit);
       else
       if(digit==btree->data)
	{
	    puts("]n duplicate nodes not allowed");
	    exit(0);
	}
    }
    return(btree);
}
void inorder(struct tree *btree)
{
    if(btree!=NULL)
    {
	inorder(btree->right);
	 printf(" %d ",btree->data);
	inorder(btree->left);
    }
}
void postorder(struct tree *btree)
{
if(btree!=NULL)
{
postorder(btree->right);
postorder(btree->left);
printf(" %d ",btree->data);
}
}
void preorder(struct tree *btree)
{
if(btree!=NULL)
{
printf(" %d ",btree->data);
preorder(btree->right);
preorder(btree->left);
}}
void search(struct tree *btree,int key)
{

if(btree==NULL)
puts("\n no doesnot exist");
else
if(key==btree->data)
printf(" no is present at %d ", key);
else
if(key<btree->data)
search(btree->left,key);
else
search(btree->right,key);
}



  and returns the new root */
struct node* deletenode(struct node* root, int key)
{
    // base case
    if (root == NULL) return root;
 
    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        struct node* temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->key = temp->key;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
