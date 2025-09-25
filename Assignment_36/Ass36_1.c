#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE) malloc (sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*first == NULL)
	{
		*first = newn;
	}
	else
	{
		newn -> next = *first;
		*first = newn;
	}
}

void Reverse(PNODE first)
{
	int iDigit = 0;
	int iNo = 0;
	int iRev = 0;
	
	while(first != NULL)
	{
		iNo = first -> data;
		iRev = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iRev = iRev *10 + iDigit;
			iNo = iNo / 10;
		}
		
		printf(" %d ",iRev);
		first = first -> next;
	}
}

void Display(PNODE first)
{
	while(first != NULL)
	{
		printf(" | %d | -> ",first -> data);
		first = first -> next;
	}
	printf("\n");
}

int main()
{
	PNODE head = NULL;
	
	InsertFirst(&head,89);
	InsertFirst(&head,6);
	InsertFirst(&head,41);
	InsertFirst(&head,17);
	InsertFirst(&head,28);
	InsertFirst(&head,11);
	
	Display(head);
	
	Reverse(head);
	
	return 0;
}