// Insert First

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

void InsertFirst(struct node ** Head, int no)
{
	struct node * newn;
	newn = (struct node *)malloc(sizeof(struct node));
	newn -> Next = NULL;
	newn -> Data = no;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{	
		newn -> Next = *Head;
		*Head = newn;
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
	
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,10);
	
	Display(First);
	
	return 0;
}