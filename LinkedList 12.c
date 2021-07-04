// DOUBLY Linked List: Insert Last

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

void InsertLast(PPNODE Head, int No)
{	
	PNODE newn = NULL;
	PNODE temp;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->Data = No;
    newn->Next = NULL;
    newn->Prev = NULL;
	
	if(*Head == NULL)
	{	
		*Head = newn;
		temp = *Head;
	}
	else
	{	
		while(temp->Next!=NULL)
		{
			temp = temp->Next;
		}
		temp->Next = newn;
		newn->Prev = temp;
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
	
	InsertLast(&First,50);
	InsertLast(&First,30);
	InsertLast(&First,120);
	InsertLast(&First,90);
	
	DisplayNode(First);
	printf("After Reversal\n");
	DisplayReverseNode(First);
	
	return 0;
}