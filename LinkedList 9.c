// Reverse a linked list (singly)

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next; 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertNode(PPNODE Head, int no)
{	
	PNODE newn = NULL;
	PNODE temp;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->Data = no;
	newn->Next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
		temp = *Head;
	}
	else
	{
		temp->Next = newn;
		temp = newn;
	}
}

void ReverseNode(PNODE Head)
{
	PNODE PreviousNode = NULL;
	PNODE CurrentNode = Head;
	PNODE NextNode = Head;
	
	while(NextNode!=NULL)
	{	
		NextNode = NextNode->Next;
		CurrentNode->Next = PreviousNode;
		PreviousNode = CurrentNode;
		CurrentNode = NextNode;
	}
	Head = PreviousNode;
	
	printf("After Reversal\n");
	while(Head!=NULL)
	{	
		printf("%d\n",Head->Data);
		Head = Head->Next;
	}
}

void DisplayNode(PNODE Head)
{	
	
	while(Head!=NULL)
	{	
		printf("%d\n",Head->Data);
		Head = Head->Next;
	}
}


int main()
{	
	PNODE First = NULL;
	
	InsertNode(&First,50);
	InsertNode(&First,30);
	InsertNode(&First,120);
	InsertNode(&First,90);
	
	DisplayNode(First);
	ReverseNode(First);
	
	return 0;
}