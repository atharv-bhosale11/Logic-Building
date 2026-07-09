#include<stdio.h>
#include<stdlib.h>

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

void DisplayEven(PNODE head)
{
    while(head != NULL)
    {
        if(head -> data % 2 == 0)
        {
            printf("%d\t",head -> data);
        }
        head = head -> next;
    }
}

int main()
{
    PNODE head = NULL;
    int iCount = 0, i= 0,iNo = 0, iRet = 0, iValue = 0;

    printf("Enter the Number of Nodes: ");
    scanf("%d",&iCount);

    printf("Enter the Elements: ");
    for(i = 1; i <= iCount; i++)
    {
        scanf("%d",&iNo);
        InsertFirst(&head,iNo);
    }

    Display(head);

    printf("\nEven Elements List: ");
    DisplayEven(head);

    return 0;
}
