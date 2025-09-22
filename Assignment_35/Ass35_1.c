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

void DisplayPerfect(PNODE first)
{
	int iCnt = 0;
	int iNo = 0;
	int iSum = 0;

	while(first != NULL)
	{
		iNo = first -> data;
		iSum = 0;
		
			for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
			{
				if(iNo % iCnt == 0)
				{
					iSum = iSum + iCnt;

				}
			}	
			
			if(iSum == iNo)
			{	
				printf(" %d ",iSum);
			}
		first = first -> next;	
	}		
}

void Display(PNODE first)
{
	while(first != NULL)
	{
		printf(" | %d | -> ", first -> data);
		first = first -> next;
	}
	printf("\n");
}
int main()
{
	PNODE head = NULL;
	
	InsertFirst(&head, 496);
	InsertFirst(&head, 28);
	InsertFirst(&head, 41);
	InsertFirst(&head, 17);
	InsertFirst(&head, 6);
	InsertFirst(&head, 11);
	
	Display(head);
	
	DisplayPerfect(head);
	
	return 0;
}