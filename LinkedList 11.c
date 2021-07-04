// DOUBLY Linked List: Insert First 

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
	struct node * Prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{	
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;
	
	if(*Head == NULL)
	{	
		*Head = newn;
	}
	else
	{	
		(*Head)->Prev = newn;
		newn->Next = (*Head);
		(*Head) = newn;
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

void DisplayReverseNode(PNODE Head)
{	
	PNODE temp = Head;
	while(temp->Next!=NULL)
	{	
		temp = temp->Next;
	}
	while(temp!=NULL)
	{
		printf("%d\n",temp->Data);
		temp = temp->Prev;
	}
}

int main()
{	
	PNODE First = NULL;
	
	InsertFirst(&First,50);
	InsertFirst(&First,30);
	InsertFirst(&First,120);
	InsertFirst(&First,90);
	
	DisplayNode(First);
	printf("After Reversal\n");
	DisplayReverseNode(First);
	
	return 0;
}