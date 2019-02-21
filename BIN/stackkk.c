#include<stdio.h>
struct stack
{
	int data[5];
	int top;
};
void init(struct stack *s)
{
	s->top=-1;
}
void push(struct stack *s,int x)
{   
if(s->top==4)
printf("Stack over flow:\n ");
	s->top++;
	s->data[s->top]=x;
}
void pop( struct stack *s)
{  
int r;
  if(s->top==-1)
  {
  
printf("Stack underflow\n");
}
	else
	{
	
	r=s->data[s->top];
	s->top--;
	return(r);
}
}
void display(struct stack *s)
{int i=0;
	if(s->top==-1)
	{
	
	printf("Stack is empty so nothing to display: ");
}
else
{

	for(i=0;i<=s->top;i++)
	printf("%d ",s->data[i]);
}
}
main()
{
	struct stack s;
	init(&s);
	push(&s,56);
	push(&s,67);
	display(&s);
	printf("\n");
	printf("After pop operation:\n");
	printf("We want to pop %d",pop(&s));
	display(&s); 
}
