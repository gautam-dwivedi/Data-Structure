
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

int main()
{	
	struct node * Head;
	Head = NULL;
	struct node * temp;
	struct node * newn;
	newn = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter the data:\n");
	scanf("%d",&newn->Data);
	
	printf("Enter the data:\n");
	scanf("%d",&newn->Data);
	
	printf("Enter the data:\n");
	scanf("%d",&newn->Data);
	
	newn -> Next = NULL;
	
	if (Head == NULL)
	{
		Head = temp = newn;
	}
	else
	{
		temp -> Next = newn;
		temp = newn;
	}
	temp = Head;
	while(temp != NULL)
	{
		printf("%d", temp->Data);
		temp = temp -> Next;
	}
	
	return 0;
}
