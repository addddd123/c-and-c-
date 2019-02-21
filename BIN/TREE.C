#include<stdio.h>
#include<conio.h>
struct bst *create(int);


struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
}*root=NULL;
void main()
{
clrscr();

root=(struct bst *)malloc(sizeof(struct bst));
//if(root==NULL)
root->data=5;
root->left=NULL;
root->right=NULL;



printf(" %d",root->data);

getch();
}