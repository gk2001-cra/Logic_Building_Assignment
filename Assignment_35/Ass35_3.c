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

int AdditionEven(PNODE first)
{
	PNODE temp = NULL;
	int iSum = 0;
	
	temp = first;
	
	while(temp != NULL)
	{
		if((temp -> data) % 2 == 0)
		{
			iSum = iSum + (temp -> data);
		}
		temp = temp -> next;
	}
	
	return iSum;
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
	int iRet = 0;
	
	InsertFirst(&head,10);	
	InsertFirst(&head,41);	
	InsertFirst(&head,32);
	InsertFirst(&head,20);
	InsertFirst(&head,11);
	
	Display(head);
	
	iRet = AdditionEven(head);
	printf("The Addition of Even Numbers in LinkedList is : %d",iRet);
	
	return 0;
}