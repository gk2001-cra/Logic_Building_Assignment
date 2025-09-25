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

void DisplayPallindrome(PNODE first)
{
	int iNo = 0;
	int iDigit = 0;
	int iOrg = 0;
	int  iRev = 0;
	
	while(first != NULL)
	{
		iOrg = first -> data;
		iNo = first -> data;
		iRev = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iRev = iRev * 10 + iDigit;
			iNo = iNo / 10;
		}
					
		if(iOrg == iRev)
		{
			printf(" %d ",iOrg);
		}
		
		first = first -> next;
	}
}
void Display(PNODE first)
{
	while(first != NULL)
	{
		printf(" | %d | ->",first -> data);
		first = first -> next;
	}
	printf("\n");
}
int main()
{
	PNODE head = NULL;

	InsertFirst(&head, 1234);
	
	
	Display(head);
	
	Reverse(head);
	
	return 0;
}