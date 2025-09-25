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

void DisplayProduct(PNODE first)
{
	int iDigit = 0;
	int iNo = 0;
	int iMult = 0;
	
	while(first != NULL)
	{
		iNo = first -> data;
		iMult = 1;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit == 0)
			{
				iDigit = 1;
			}
			iMult = iMult * iDigit;
			iNo = iNo / 10;
		}
		
		printf(" %d ",iMult);
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
	
	InsertFirst(&head,49);
	InsertFirst(&head,32);
	InsertFirst(&head,20);
	InsertFirst(&head,11);
	
	Display(head);
	
	DisplayProduct(head);
	
	return 0;
}