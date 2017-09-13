#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node 
{
 int info;
 struct node *link;
};
struct node *start1=NULL, *ptr1, *new, *start2=NULL, *ptr2, *ptr;
void create_first();
void create_second();
void insert();
void display();

void main()
{int option;
 do
 {
  printf("enter ur choice\n");
  printf("1. create the first linked list\n");
  printf("2. create second linked list\n");
  printf("3. insert in between linked list\n");
  printf("4. Exit\n");
  scanf("%d",&option);
  switch(option)
  {
   case 1: create_first(); break;
   case 2: create_second(); break;
   case 3: insert();break;
   
  }
  
 }while(option!=4);
 
}

void create_first()
{int value; 
printf("enter the value");
scanf("%d",&value);
 while(value!=-1){
  printf("enter -1 to exit");
 if(start1==NULL)
 {
  new=(struct node*)malloc(sizeof(struct node));
  new->info=value;
  new->link=NULL;
  start1=new;
  ptr1=new;
 }
 else
 {
  new=(struct node*)malloc(sizeof(struct node));
  new->info=value;
  new->link=NULL;
  ptr1->link=new;
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
printf("enter the value");
scanf("%d",&value);
 while(value!=-1){
  printf("enter -1 to exit");
 if(start2==NULL)
 {
  new=(struct node*)malloc(sizeof(struct node));
  new->info=value;
  new->link=NULL;
  start2=new;
  ptr2=new;
 }
 else
 {
  new=(struct node*)malloc(sizeof(struct node));
  new->info=value;
  new->link=NULL;
  ptr2->link=new;
  ptr2=new;
  
 }
 printf("enter the value");
 scanf("%d",&value);
 if(value==-1){break;}
 }
 display();
}



void insert()
{
 ptr1=start1;
 ptr2=start2->link;
 ptr=start2;
 while(ptr->link!=NULL)
  {
   ptr=ptr->link;
  }
  
  
  ptr->link=ptr1->link;
  ptr1->link=ptr2;
  
  
  display();
}

void display()
{printf("the linked list is...\n");
 ptr=start1;
 while(ptr!=NULL)
 {
  printf("%d\t",ptr->info);
  ptr=ptr->link;
 }
}

