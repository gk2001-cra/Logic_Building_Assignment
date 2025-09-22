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

void Display(PNODE first)
{
	while(first != NULL)
	{
		printf(" | %d | -> ", first -> data);
		first = first -> next;
	}
	printf("\n");
}

int Count(PNODE first)
{
	int iCount = 0;
	
	while(first != NULL)
	{
		iCount++;
		first = first -> next;
	}
	return iCount;
}

int SecMaximum(PNODE first)
{
	int iCount = 0;
	int iCnt = 0;
	int iMax = 0;
	int iNo = 0;

	iCount = Count(first);
	
	iMax = first -> data;
	

	while(first != NULL)
	{
		iNo = first -> data;
		
		for(iCnt = 0; iCnt < iCount; iCnt++)
		{
			if(iNo > iMax)
			{						
				iMax = iNo;
				iMax = first -> data;
			}
		}
		
		first = first -> next;	
	}		
	
	return iMax;
}

int main()
{
	PNODE head = NULL;
	int iRet = 0;
	
	
	InsertFirst(&head, 28);
	InsertFirst(&head, 41);
	InsertFirst(&head, 1117);
	InsertFirst(&head, 4961);
	InsertFirst(&head, 6);
	InsertFirst(&head, 11);
	
	Display(head);
	
	iRet = SecMaximum(head);
	printf("The Second Maximum number in linked list is : %d",iRet);
	
	return 0;
}