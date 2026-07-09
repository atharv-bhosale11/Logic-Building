#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(NULL == *first)
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
        printf("|%d| -> ",first -> data);
        first = first -> next;
    }
    printf("NULL");
}

BOOL Search(PNODE head, int No)
{
    while(head != NULL)
    {
        if(head -> data == No)
        {
            return TRUE;
        }
        head = head -> next;
    }
    return FALSE;
}

int main()
{
    PNODE head = NULL;
    int iCount = 0, i= 0,iNo = 0, iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number of Nodes: ");
    scanf("%d",&iCount);

    printf("Enter the Elements: ");
    for(i = 1; i <= iCount; i++)
    {
        scanf("%d",&iNo);
        InsertFirst(&head,iNo);
    }

    Display(head);

    printf("\nEnter the Number you want to search: ");
    scanf("%d",&iValue);

    bRet = Search(head,iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is not Present");
    }

    return 0;
}
