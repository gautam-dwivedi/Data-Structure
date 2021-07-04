
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

void InsertFirst(PPNODE Head, int No)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->Data = No;
	newn->Next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn; 
	}
	else
	{
		newn->Next = *Head;
		*Head = newn;
	}
}

void InsertLast(PPNODE Head, int No)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->Data = No;
	newn->Next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn; 
	}
	else
	{
		while(temp->Next != NULL)
		{
			temp = temp->Next;
		}
		temp->Next = newn;
	}	
}

void DeleteFirst(PPNODE Head)
{	PNODE temp = *Head;

	if(Head == NULL)
	{
		return;
	}
	else if((*Head)->Next == NULL)
	{	
		free(*Head);
		*Head = NULL;
	}
	else
	{	
		*Head = (*Head)->Next;
		free(temp);
	}
}

void DeleteLast(PPNODE Head)
{	
	PNODE temp = *Head;

	if(Head == NULL)
	{
		return;
	}
	else if((*Head)->Next == NULL)
	{	
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->Next->Next != NULL)
		{
			temp = temp->Next;
		}
		free(temp->Next);
		temp->Next = NULL;	
	}	
}

void Display(PNODE Head)
{	
	while(Head != NULL)
	{
		printf("%d\n", Head->Data);
		Head = Head->Next;
	}
}

int main()
{	
	PNODE First = NULL;
	
	InsertFirst(&First, 35);
	InsertFirst(&First, 50);
	InsertFirst(&First, 80);
	InsertLast(&First, 100);
	InsertLast(&First, 120);
	Display(First);
	printf("After Delete First\n");
	DeleteFirst(&First);
	DeleteFirst(&First);
	Display(First);
	printf("After Delete Last\n");
	DeleteLast(&First);
	Display(First);
	
	return 0;
}