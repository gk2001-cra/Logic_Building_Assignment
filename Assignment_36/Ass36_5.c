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
	
	newn = (PNODE) malloc(sizeof(NODE));
	
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

void DisplayLarge(PNODE first)
{
	int iDigit = 0;
	int iMax = 0;
	int iNo = 0;
	
	while(first != NULL)
	{
		iNo = first -> data;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iMax < iDigit)
			{
				iMax = iDigit;
			}
			iNo = iNo / 10;
		}
		printf(" | %d |",iMax);
		
		
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
	
	InsertFirst(&head,51);
	InsertFirst(&head,21);
	InsertFirst(&head,11);
	
	Display(head);
	
	DisplayLarge(head);
		
	
	
	return 0;
}