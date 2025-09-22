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
    PNODE newn  = NULL;

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

int SearchFirstOcc(PPNODE first, int iSearch)
{
    int iCount = 1;
    int iRet = 0;

    PNODE temp = NULL;

        temp = *first;

        while(temp != NULL)
        {
            if((temp -> data) == iSearch)
            {
                iRet = iCount;
                break;
            }
            temp = temp -> next;
            iCount++;
            
        }

    return iRet;
}


int main()
{
    PNODE head = NULL;
    int iRes = 0;
	int iValue = 0;

    InsertFirst(&head, 30);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);
	
	printf("Enter the element to be searched : \n");
	scanf("%d",&iValue);

    iRes = SearchFirstOcc(&head, iValue);

    printf("The Element is at Position : %d", iRes);
    
    return 0;
}