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

int Minimum(PPNODE first)
{
    PNODE temp = NULL;
    int iMin = 0;

        temp = *first;

        iMin = temp -> data;

        while(temp != NULL)
        {
            if(temp -> data < iMin)
            {
                iMin = temp -> data;   
            }
            temp = temp -> next;
        }

    return iMin;
}z

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

    iRes = Minimum(&head);

    printf("The Minimum element is : %d", iRes);
    
    return 0;
}