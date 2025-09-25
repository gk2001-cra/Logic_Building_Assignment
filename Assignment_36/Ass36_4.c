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

void DisplaySmall(PNODE first)
{
	int iDigit = 0;
	int iNo = 0;
	int iMin = 0;
	
	while(first != NULL)
	{
		iNo = first -> data;
		iMin = 9; // set to maximum digit
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			if(iMin > iDigit)
			{			
				iMin = iDigit;
			}
	
			iNo = iNo / 10;
		}
		
		printf(" %d ",iMin);
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
	
	InsertFirst(&head,415);
	InsertFirst(&head,532);
	InsertFirst(&head,250);
	InsertFirst(&head,11);
	
	Display(head);
	
	DisplaySmall(head);
	
	return 0;
}