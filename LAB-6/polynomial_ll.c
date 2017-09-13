#include<stdio.h>
#include<malloc.h>
struct node
{
 int coeff;
 int expo;
 struct node *link;
};
struct node *ptr1, *new, *start1=NULL, *start2=NULL, *ptr2, *start=NULL, *ptr3, *ptr, *start3=NULL;

void create_first_poly();
void create_second_poly();
void add();
void display();
void add_node();

void main()
{int option;
 do
 {
  printf("choose ur option\n");
  printf("1. create the first polynomial\n");
  printf("2. create second polynomial\n");
  printf("3. add the two polynomials\n");
  printf("4. display \n5. EXIT\n");
  
  scanf("%d",&option);
   switch(option)
   {
    case 1: create_first_poly(); break;
    case 2: create_second_poly(); break;
    case 3: add(); break;
    case 4: display();break;
   }
 }while(option !=5);
 
}


void create_first_poly()
{int e,c;
 printf("press -1 to exit\n");
 printf("enter the coefficient:");
 scanf("%d",&c);
 printf("enter the exponent");
 scanf("%d",&e);
 while(c!=-1)
 {
  if(start1==NULL)
   {
    new= (struct node*)malloc(sizeof(struct node));
    new->coeff=c;
    new->expo=e;
    new->link=NULL;
    start1=new;
    ptr1=new;
   }
   else
    {
     new= (struct node*)malloc(sizeof(struct node));
     new->coeff=c;
     new->expo=e;
     new->link=NULL;
     ptr1->link=new;
     ptr1=new;
    }
    printf("enter the coefficient");
    scanf("%d",&c);
    if(c==-1){break;}
    printf("enter the exponent");
    scanf("%d",&e);
 }
}

void create_second_poly()
{
 int e,c;
 printf("press -1 to exit\n");
 printf("enter the coefficient:");
 scanf("%d",&c);
 printf("enter the exponent");
 scanf("%d",&e);
 while(c!=-1)
 {
  if(start2==NULL)
   {
    new= (struct node*)malloc(sizeof(struct node));
    new->coeff=c;
    new->expo=e;
    new->link=NULL;
    start2=new;
    ptr2=new;
   }
   else
    {
     new= (struct node*)malloc(sizeof(struct node));
     new->coeff=c;
     new->expo=e;
     new->link=NULL;
     ptr2->link=new;
     ptr2=new;
    }
    printf("enter the coefficient");
    scanf("%d",&c);
    if(c==-1){break;}
    printf("enter the exponent");
    scanf("%d",&e);
 }
}
void add()
{int sum;
 ptr1=start1;
 ptr2= start2;
 while(ptr1!=NULL && ptr2 !=NULL){
 if(ptr1->expo==ptr2->expo)
 {
  sum=ptr1->coeff+ptr2->coeff;
 add_node(sum,ptr1->expo);
  ptr1=ptr1->link;
  ptr2=ptr2->link;
  }
  else if(ptr1->expo > ptr2->expo)
   {
    add_node(ptr1->coeff,  ptr1->expo);
    ptr1=ptr1->link;
   }
   else if(ptr1->expo < ptr2->expo)
    {
    add_node(ptr2->coeff,  ptr2->expo);
     ptr2=ptr2->link;
    }
  }
  if(ptr1 == NULL)
   {
    while(ptr2!=NULL)
     {
      add_node(ptr2->coeff, ptr2->expo);
      ptr2=ptr2->link;
     }
   }
   if(ptr2 == NULL)
    {
     while(ptr1!=NULL)
      {
      add_node(ptr1->coeff,  ptr1->expo);
       ptr1= ptr1->link;
      }
    }
 
}
void add_node(int sum_, int n)
{
 if(start3==NULL)
  {
   new =(struct node*)malloc(sizeof(struct node));
   new->coeff=sum_;
   new->expo=n;
   new->link= NULL;
   start3=new;
   ptr3=new;
  }
  else
  {
   new =(struct node*)malloc(sizeof(struct node));
   new->coeff=sum_;
   new->expo=n;
   new->link=NULL;
   ptr3->link=new;
  }
}

void display()
{printf("the answer is\n");
 ptr3=start3;
 while(ptr3!=NULL)
  {
   printf("%dx^%d\t",ptr3->coeff, ptr3->expo);
   ptr3=ptr3->link;
  }
 
}




