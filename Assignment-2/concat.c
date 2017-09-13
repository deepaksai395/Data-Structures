#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void create_first();
void create_second();
void concat();
void display();

struct node
{
 int info;
 struct node *prev;
 struct node *link;
};

struct node *start1=NULL, *start2=NULL, *ptr1, *ptr2, *new;

void main()
{int option;
 do
 {
  printf("choose the option\n");
  printf("1. create first linked list\n");
  printf("2. create second linked list\n");
  printf("3. concatenate\n");
  printf("4. EXIT\n");
  scanf("%d",&option);
  switch(option)
  {
   case 1: create_first(); break;
   case 2: create_second(); break;
   case 3: concat();
  }
 }while(option!=4);
 
}

void create_first()
{int value;
printf("enter -1 to exit\n");
 printf("enter the value");
 scanf("%d",&value);
 while(value!=-1)
 {
   if(start1==NULL)
   {
    new=(struct node*)malloc(sizeof(struct node));
    new->info=value;
    new->link=NULL;
    new->prev=NULL;
    start1=new;
    ptr1=new;
   }
   else
   {
    new=(struct node*)malloc(sizeof(struct node));
    new->info=value;
    new->link=NULL;
    ptr1->link=new;
    new->prev=ptr1;
    ptr1=new;
    
   }
    printf("enter the value");
 scanf("%d",&value);
 if(value==-1){break;} 
 }
 display();
}


void create_second()
{
int value;
printf("enter -1 to exit\n");
 printf("enter the value");
 scanf("%d",&value);
 while(value!=-1)
 {
   if(start2==NULL)
   {
    new=(struct node*)malloc(sizeof(struct node));
    new->info=value;
    new->link=NULL;
    new->prev=NULL;
    start2=new;
    ptr2=new;
   }
   else
   {
    new=(struct node*)malloc(sizeof(struct node));
    new->info=value;
    new->link=NULL;
    ptr2->link=new;
    new->prev=ptr2;
    ptr2=new;
    
   }
    printf("enter the value");
 scanf("%d",&value);
 if(value==-1){break;} 
 }
 display();
}


void concat()
{
 ptr1=start1;
 ptr2=start2;
 while(ptr1->link!=NULL)
 {
  ptr1=ptr1->link;
 }
 ptr1->link=ptr2;
 ptr2->prev=ptr1;
 display();
}

void display()
{printf("the linked list is\n");
 ptr1=start1;
 while(ptr1!=NULL)
 {
  printf("%d\t",ptr1->info);
  ptr1=ptr1->link;
 }
 
}
