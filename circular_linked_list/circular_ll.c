#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void insert_beg();
void insert_end();
void delete_beg();
void delete_end();

void create();

struct node
{
 int data;
 struct node *link;
};
struct node *new, *ptr, *preptr, *start=NULL;
void display(struct node *);
void main()
{int n,input;
 printf("enter the number of nodes:");
 scanf("%d",&n);
 printf("creating linked list :)\n");
 create(n);
 printf("choose the option below\n");
 printf("1.insertion in the beginning\n");
 printf("2.insertion in the end\n");
 printf("3.deletion in the beginning\n");
 printf("4.deletion in the end\n");
 scanf("%d",&input);
 if(input>=5){printf("ente the valid option");}
 switch(input)
 {
  case 1: insert_beg();break;
  case 2: insert_end();break;
  case 3: delete_beg();break;
  case 4: delete_end();break;
 }
 
 
}

void display(struct node *start)
{
 ptr= start;
 do
  {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
  }while(ptr!=start);
	printf("\n");
}

void create(int n)
{int i;
 for(i=0;i<n;i++)
 {
  new= (struct node*)malloc(sizeof(struct node));
  printf("enter the value:");
  scanf("%d",&new->data);
  
  if(start==NULL)
  {
   start=new;ptr=new;
  }
  else
  {
   ptr->link=new;ptr=new;
  }
 }
 ptr->link=start;
 printf("the entered linked list is\n");
 display(start);
 
}


void insert_beg()
{
 new= (struct node*)malloc(sizeof(struct node));
 printf("enter the value:");
 scanf("%d",&new->data);
 ptr=start;
 while(ptr->link != start){ptr=ptr->link;}
 new->link=start; ptr->link=new; start=new;
 printf("the new linked list is\n");
 display(start);
}


void insert_end()
{
 new= (struct node*)malloc(sizeof(struct node));
 printf("enter the value:");
 scanf("%d",&new->data);
 new->link=start;
 ptr=start;
 while(ptr->link!=start){ptr=ptr->link;}
 ptr->link=new;
 printf("the new linked list is\n");
 display(start);
}

void delete_beg()
{
 ptr=start;
 while(ptr->link!=start){ptr=ptr->link;}
 ptr->link=start->link;
 free(start);
 start=ptr->link;
 printf("the new linked list is\n");
 display(start);
}


void delete_end()
{
 ptr=start;
 preptr= start;
 while(ptr->link!=start)
 {
  preptr=ptr;
  ptr=ptr->link;
 }
 preptr->link=start;
 free(ptr);
 display(start);
}
