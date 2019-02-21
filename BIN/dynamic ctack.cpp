#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct stack {
	int num;
	struct stack *next;
} *t=0;
typedef struct stack it;
void push();
int pop();
void show();
int main()
{
	char chr;
	int opt,no;
	while(1)
	{
		//clrscr();
		printf("\n 1:push");
		printf("\n 2:pop");
		printf("\n 3: show");
		printf("\n 4 :exit");
		scanf("\n enter your option");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
			       push();
				break;
			case 2:
				no=pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\n invalid choice");
				break;
		}
		
	}
}

void push()
{
	it *node;
	node =(it*)malloc(sizeof(it));
	printf("\n enter the no.");
	scanf("%d",&node->num);
	node->next=t;
	t=node;
}
int pop()
{
	it *temp;
	temp=t;
	if(t==NULL)
	{
		printf("\n stack underflow");
	//	getch();
		exit(0);
		
	}
	else
	{
		t=t->next;
		free(temp);
	}
	return(temp->num);
	}

void show()
{
	it *tmp;
	tmp=t;
	if(tmp==NULL)
    printf("\n stack is empty");
    exit(0);
	while(tmp->next!=NULL)
	{
		printf("%d",tmp->num);
		tmp=tmp->next;
	}
	printf("%d",tmp->num);
	}

