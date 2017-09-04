#include<stdio.h>
#include<stdlib.h>

void insert();
void create(int n);
void display();
void delete();

struct node
{
 int info;
 struct node *link;
};
struct node *ptr, *preptr, *start, *new, *temp;

void main()
{ int input=0,n;
 printf("enter the number of nodes for list\n");
 scanf("%d",&n);
 printf("Creating list...\n");
 create(n);
 printf("list of %d nodes is created\n",n);
 display();
 
 printf("\n\nchoose an option:\n");
 printf("1. Insert after a given node\n");
 printf("2. Delete after a given node\n");
 scanf("%d",&input);
 
 switch(input)
 {
  case 1: insert(); break;
  case 2: delete(); break;
 }
}
void create(int n)
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

void display()
{
ptr=start;
 while(ptr!=NULL)
 {
  printf("%d\t",ptr->info);
  ptr=ptr->link;
 }
}



void insert()
{int value,num;
  printf("enter the data ");
  scanf("%d",&value);
  printf("enter the number after which it has to be inserted");
  scanf("%d",&num);
  new=(struct node*)malloc(sizeof(struct node));
  new->info=value;
  ptr=start;
  preptr=ptr;
  while(preptr->info!=num)
  {
    preptr=ptr;
    ptr=ptr->link;
  }
  preptr->link=new;
  new->link=ptr;
  printf("the new list is\n");
  display();
}


void delete()
{
  int value;
  printf("enter the value after which node has to be deleted ");
  scanf("%d",&value);
  ptr=start;
  preptr=ptr;
  while(preptr->info!=value)
  {
    preptr=ptr;
    ptr=ptr->link;
  }
  preptr->link=ptr->link;
  free(ptr);
  printf("the new list is\n");
  display();
  
}


