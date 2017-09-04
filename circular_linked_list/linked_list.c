#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void Create_List(int n );
void Display();
void Insert_Beg();
void Insert_End();
void Delete_Beg();
void Delete_End();

struct node
{
  int info;
  struct node *link;
  };
  struct node *ptr, *preptr, *start, *new;
  
  
  
  
  
void main()
{
 int input=0,n;
 
 printf("enter the number of nodes for list\n");
 scanf("%d",&n);
 printf("Creating list...\n");
 Create_List(n);
 printf("list of %d nodes is created\n",n);
 Display();
 
 printf("\n\n\nchoose the option below..\n");
 printf("1. Insertion at the beginning\n");
 printf("2. Insertion at the end\n");
 printf("3. Deletion at the beginning\n");
 printf("4. Deletion at the end\n");
 printf("5. EXIT\n");
 scanf("%d",&input);
 
 
  switch(input)
  {
   case 1: Insert_Beg(); break;
   case 2: Insert_End(); break;
   case 3: Delete_Beg(); break;
   case 4: Delete_End(); break;
   case 5: break;
   
  }
 
 
 
}





void Create_List(int n)
{
 int i;
 for(i=0;i<n;i++)
 {
   new=(struct node*)malloc(sizeof(struct node));
   printf("enter the number:");
   scanf("%d",&new->info);
   new->link= NULL;
   if(start== NULL)
   {
    start=new;ptr=new;
   }
   else
   {
    ptr->link=new;ptr=new;
   }
 }
}

void Display()
{ 
 ptr=start;
 while(ptr!=NULL)
 {
  printf("%d\t",ptr->info);
  ptr=ptr->link;
 }

}
void Insert_Beg()
{
 new=(struct node*)malloc(sizeof(struct node));
 printf("enter the number:");
 scanf("%d",&new->info);
 new->link=start;
 start=new;
 printf("the new list is\n");
 Display();

}
void Insert_End()
{
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter the number:");
  scanf("%d",&new->info);
  ptr=start;
  while(ptr->link !=NULL)
  {
   ptr=ptr->link;
   
  }
  ptr->link=new;
  new->link=NULL;
  printf("the new list is\n");
 Display();
}
void Delete_Beg()
{
 if(start==NULL)
 {
  printf("UNDERFLOW");return;
 }
 ptr=start;
 start=start->link;
 free(ptr);
 printf("the new list is\n");
 Display();
 }
void Delete_End()
{
  preptr=start;
  ptr=start;
  while(ptr->link!=NULL)
  {
   preptr=ptr;
   ptr=ptr->link;
  }
  preptr->link=NULL;
  free(ptr);
  printf("the new list is\n");
 Display();
}
