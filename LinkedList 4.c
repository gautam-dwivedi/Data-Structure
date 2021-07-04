// Linked List with more than 2 nodes  

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

void InsertNode(struct node ** Head, int no)
{
	struct node * newn;
	newn = (struct node *)malloc(sizeof(struct node));
	newn -> Next = NULL;
	newn -> Data = no;
	
	struct node ** temp;
	
	if(*Head == NULL)
	{
		*Head= *temp = newn;
	}
	else
	{	
		(*temp) -> Next = newn;
		*temp = newn;
	}
}

void Display(struct node * Head)
{
	while(Head != NULL)
	{
		printf("%d\n",Head->Data);
		Head = Head->Next;
	}
}

int main()
{	
	struct node * First;
	First = NULL;
	
	InsertNode(&First,50);
	InsertNode(&First,30);
	InsertNode(&First,40);
	InsertNode(&First,10);
	InsertNode(&First,20);
	InsertNode(&First,60);
	InsertNode(&First,05);
	
	Display(First);
	
	return 0;
}