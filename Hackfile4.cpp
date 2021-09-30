#include<stdio.h>
#include<stdlib.h>
#define max 5
int i,top=-1,flag,ele,stack[max];
void push()
{
  if(top==(max-1))
  {
    printf("Overflow");
  }
  else
  {
   ++top;
   printf("Enter the element");
   scanf("%d",&ele);
   stack[top]=ele;
  }
}
void pop()
{
  if(top<=-1)
  {
    printf("Underflow");
  }
  else
  {
      ele=stack[top];
      top--;
      printf("Deleted element=%d",ele);
  }
}

void display()
{
 printf("Stack elements are:");
 for(i=top;i>=0;i--)
 {
   printf("%d\t",stack[i]);
 }
}
void palindrome()
{
int k=top,j=0;
while(k!=(top/2))
{
 if(stack[k]==stack[j])
 {
   k--;
   j++;
  flag=1;
 }
 else
 {
  flag=0;
  break;
 }
}
 if(flag==1)
 {
   printf("yes");
 }
else
{
  printf("no");
}
}
 void main()
 {
  int ch;
  while(1)
  {
    printf("\nEnter ch value: ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:push();
     break;
     case 2:display();
     break;
     case 3: palindrome();
     break;
     case 4: pop();
     break;
     case 5:exit(0);
     break;
     default: printf("Invalid");
     break;
    }
  }
 }
