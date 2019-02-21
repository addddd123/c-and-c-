#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct stack {
	int num;
	struct stack *next;
} *t=0;
typedef struct stack it;
void push();
void pop();
void show();
int main()
{
	char chr;
	int opt,no;
	do
	{
		//clrscr();
		printf("\n 1:push");
		printf("\n 2:pop");
		printf("\n 3: show");
		printf("\n >3 :exit");	
		scanf("\n enter your option");
		scanf("%d",&opt);
		switch(opt);
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
			default:
				printf("\nby choice terminated");
				exit 0;
		}
		printf("\n contuniue press y\n ");
		fflush(stdin);
		chr=getche();
	}while(chr=='Y'||chr=='y');	
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
		gexth();
		exit 0;
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
	while(tmp->next!=NULL)
	{
		printf("%d",tmp->num);
		tmp=tmp->next;
	}
	printf("%d",tmp->num);
	}

