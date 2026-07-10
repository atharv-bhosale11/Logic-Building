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

int CountGreater(PNODE head,int No)
{
    int iCount = 0;
    while(head != NULL)
    {
        if(head -> data > No)
        {
            iCount++;
        }
        head = head -> next;
    }
    return iCount;
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
    printf("\nEnter Number you have to find greater: ");
    scanf("%d",&iValue);

    iRet = CountGreater(head,iValue);
    printf("There are %d numbers are greater than %d",iRet,iValue);
   

    return 0;
}
