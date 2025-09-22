#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node * next;
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

void SumDigit(PNODE first)
{
	int iNo = 0;
	int iSum = 0;
	int iDigit = 0;
	
	while(first != NULL)
	{
		iNo = first -> data;
		iSum = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;	
		}
		printf(" %d ", iSum);
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
	
	InsertFirst(&head,640);
	InsertFirst(&head,240);
	InsertFirst(&head,20);	
	InsertFirst(&head,230);
	InsertFirst(&head,110);

	
	Display(head);

	SumDigit(head);

	
	return 0;
}