#include<stdio.h>
void push(int stack[]);
int pop(int stack[]);
void display(int stack[]);
#define MAX 5
int stack[MAX]; int top=-1;
void main()
{int option,val;
int stack[MAX];
 do{
  printf("choose ur option\n");
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.EXIT\n");
  scanf("%d",&option);
  switch(option)
  {
   case 1: push(stack); break;
   case 2: val=pop(stack);
   	   printf("\nthe value deleted from stack is %d\n",val); 
   	   display(stack); break;
  }
 }while(option != 3);
}
void push(int stack[])
{int value;
 printf("enter the value to be pushed:");
 scanf("%d",&value);
 if(top == MAX-1){printf("OVERFLOW");}
 else{
 top++;
 stack[top]=value;
 }
 display(stack);
}
void display(int stack[])
{int i;
 printf("the current stack is\n");
 for(i=0;i<=top;i++)
 {
  printf("%d\t",stack[i]);
 }
 printf("\n\n");
}
int  pop(int stack[])
{int val;
 if(top == -1){printf("UNDERFLOW");}
 else{
       val=stack[top];
       top--;
       return val;
 }
 
}
