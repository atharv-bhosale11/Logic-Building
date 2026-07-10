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

void InsertLast(PPNODE first, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(NULL == *first)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
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

int FirstOccur(PNODE head,int No)
{
    int iPos = 1;

    while(head != NULL)
    {
        if(head -> data == No)
        {
            return iPos;
        }
        iPos++;
        head = head -> next;
    }
    return -1;
}

int main()
{
    PNODE head = NULL;
    int iCount = 0, i= 0,iNo = 0, iValue = 0;
    int iRet = 0;

    printf("Enter the Number of Nodes: ");
    scanf("%d",&iCount);

    printf("Enter the Elements: ");
    for(i = 1; i <= iCount; i++)
    {
        scanf("%d",&iNo);
        InsertLast(&head,iNo);
    }

    Display(head);
    printf("\nEnter element to Search: ");
    scanf("%d",&iValue);

    iRet = FirstOccur(head,iValue);

    if(iRet == -1)
    {
        printf("No not found");
    }
    else
    {
        printf("%d number found at %d position",iValue,iRet);
    }

    return 0;
}
