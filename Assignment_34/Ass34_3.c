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

int Addition(PPNODE first)
{
    PNODE temp = NULL;
    int iSum = 0;

        temp = *first;

        while(temp != NULL)
        {
            iSum = iSum + temp -> data;
            temp = temp -> next;
        }

    return iSum;
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
    int iRes = 0;

    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    iRes = Addition(&head);

    printf("The addition of all elements in linked listed is : %d", iRes);
    
    return 0;
}