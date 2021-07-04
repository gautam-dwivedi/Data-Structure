// typedef version of list6 program
// Display: Insert nodes First and Last 

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

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn;
	
	newn = (PNODE)malloc(sizeof(struct node));
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

void InsertLast(PPNODE Head, int no)
{
	PNODE newn;
	newn = (PNODE)malloc(sizeof(struct node));
	newn -> Next = NULL;
	newn -> Data = no;
	
	PNODE temp;
	temp = *Head;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{	
		while(temp -> Next != NULL)
		{
			temp = temp -> Next;
		}
		temp -> Next = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\n",Head->Data);
		Head = Head->Next;
	}
}

int main()
{	PNODE First = NULL;
	
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,10);
	InsertLast(&First,90);
	InsertLast(&First,75);
	InsertLast(&First,60);
	Display(First);
	
	return 0;
}

