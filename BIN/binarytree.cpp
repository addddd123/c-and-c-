#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
};

struct node *newnode(int data)
{
	struct node * node=(struct node*)malloc(sizeof(struct node));


	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void show(struct node *root,struct node *left,int data)
{

}
int main()
{   
int n,	i=0;
    struct node *root;
    int data;
	printf("::how many nodes u want to create::");
	scanf("%d",&n);
	printf("enter data at root node ");
    while(i<n)
    {
    scanf("%d",&data);
	if(root==NULL)
	root=newnode(data);
	else
	{
		if(data<root->data)
		root->left=newnode(data);
		else
		root->right=newnode(data);
	}
	}
	return 0;
}
