#include<stdio.h>

void Display(int iNo)
{
  if(iNo >= 1)
  {
    Display(iNo - 1);
    printf("%c\t",'a' + iNo - 1);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the Number: ");
  scanf("%d",&iValue);
  Display(iValue);
  
  return 0;
}
