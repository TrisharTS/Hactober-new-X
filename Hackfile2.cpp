#include<stdio.h>
#include<stdlib.h>
int i;
 struct node {
  int info;
  struct node *lchild;
  struct node *rchild;
 }; typedef struct node *Node;

Node createnode(int item)
{
  Node newnode=(Node)malloc(sizeof(struct node));
  newnode->info=item;
  newnode->lchild=NULL;
  newnode->rchild=NULL;
  return newnode;
}

void insertBST(Node root, Node newnode)
{
  if(root->info==newnode->info)
  {
    i--;
    printf("Value already exists");
  }
  else if(root->info<newnode->info)
  {
    if(root->rchild==NULL)
    {
      root->rchild=newnode;   
    }  
    else
    {
      insertBST(root->rchild,newnode);
    }
  }
else
 {
  if(root->lchild==NULL)
    {
      root->lchild=newnode;
    }  
    else
    {
      insertBST(root->lchild,newnode);
    }
 }
}

void inorder(Node temp)
{
 if(temp!=NULL)
  {
    inorder(temp->lchild);
    printf("%d\t",temp->info);
    inorder(temp->rchild);
  }
}
void preorder(Node temp)
{
 if(temp!=NULL)
  {
     printf("%d\t",temp->info);
    inorder(temp->lchild);
    inorder(temp->rchild);
  }
}
void postorder(Node temp)
{
 if(temp!=NULL)
  {
    inorder(temp->lchild);
    inorder(temp->rchild);
    printf("%d\t",temp->info);
  }
}
 
 int search(Node root, int key)
 {
  if(!root)
  {
   return -1;
  }
  else if(root->info==key)
  {
    return 1;
  }
  else if(root->info<key)
  {
    search(root->rchild,key);
  }
   else 
  {
    search(root->lchild,key);
  }
 } 
 void main()
 {
  Node root=NULL, newnode;
  int ch ,i,item,key,n,keyfound;
  while(1)
  {
    printf("\nEnter ch value: " );
    scanf("%d", &ch);
    switch(ch)
    {
      case 1: 
       printf("\nEnter n value: " );
       scanf("%d", &n);

printf("\nEnter the values to create\n");
for(i=0; i<n; i++)
{
printf("Item");
scanf("%d", &item);
newnode=createnode(item);
if(root==NULL)
    {
      root=newnode;   
    }  
    else
    {
      insertBST(root,newnode);
    }
}
break;
case 2:
if(root==NULL)
    {
      printf("empty");  
    }  
    else
    {
     printf("\nInorder Traversal: \n");
inorder(root);
printf("\nPreorder Traversal: \n");
preorder(root); 
printf("\nPostorder Traversal: \n");
postorder(root);
break; 
    }
case 3: 
    printf("\nEnter the element to search: ");
scanf("%d", &key);
search(root, key);
keyfound=search(root,key);
if(keyfound==1)
{
 printf("Key found");
}
else
{
  printf("Key not found");
}
break;
case 4:
exit(0);
break;
default:printf("Invalid");
break;
    }
  }
 }



 
