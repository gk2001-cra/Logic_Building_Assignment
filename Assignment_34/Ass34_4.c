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

int Maximum(PPNODE first)
{
    PNODE temp = NULL;
    int iMax = 0;

        temp = *first;

        iMax = temp -> data;

        while(temp != NULL)
        {
            if(temp -> data > iMax)
            {
                iMax = temp -> data;   
            }
            temp = temp -> next;
        }

    return iMax;
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

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    Display(head);

    iRes = Maximum(&head);

    printf("The Maximum element is : %d", iRes);
    
    return 0;
}