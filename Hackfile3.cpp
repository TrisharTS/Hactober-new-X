#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define Max 100
char infix[100],postfix[100],stack[Max],pr,c;
int top=-1,item,i,k;
void push(char c)
{
stack[++top]=c;
}
char pop(c)
{
 return stack[top--];
}
int precedence (char elem)
{  
switch(elem)
{
    case '#' :return 0;
          break; 
    case '(' :return 1;
          break; 
    case '+' :return 2;
          break; 
    case '-' :return 2;
          break; 
    case '*' :return 3;
          break; 
    case '/' :return 3;
          break; 
    case '%' :return 3;
          break;
     case '^' :return 4;
          break;  
    default: return -1;
         break;
}
}
void main()
{
char ch;
printf("Enter the infix expression");
scanf("%s",infix);
push('#');
for(i=0;infix[i]!='\0';i++)
 {
   if(infix[i]=='(')
   {
    push(infix[i]);
   }
    else if(infix[i]==')')
    {
     while(stack[top]!='(')
     {
       postfix[k++]=pop(stack[top]);
     }
       pop(infix[i]);
     }
     else if(isalnum(infix[i]))
    {
     postfix[k++]=infix[i];
    }
    else
    {
     pr=precedence(infix[i]);
     if(precedence(stack[top]>=pr))
     {
       push(infix[i]);
     }
      else
     {
      postfix[k++]=pop(stack[top]);
      push(infix[i]);
     }
    }
 }

while(stack[top]!='#')
{
 postfix[k++]=stack[top];
 top--;
 }

puts(postfix);
}
