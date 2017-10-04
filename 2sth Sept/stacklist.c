#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head=NULL ;
    NODE  *scanPtr ;
 
 
 
 DisplayMenu()
  {	
  int i=0;
  	
	printf("\n 1. push an element");
  	printf("\n 2. pop an element");
  	printf("\n 3. display stack content");
  	 scanf(" \n %d ",&i);
	 return i;
   }

void push()
{
	NODE *temp;
      int element;
         temp=(NODE*)malloc(sizeof(NODE));
     		
 		    printf("\n enter the value to be pushed onto stack");
     	  scanf("%d",&element);
     	  temp->data=element;
     	
     	  scanPtr=head;
     	  head=temp;
     	  temp->next=scanPtr;
}

void pop()
{

 		
 		    if(head==NULL)
 		    {
 			      printf("\n the list is empty");
 		    }
 		else
		 {
		  NODE *temp=head;
     	  head=temp->next;
     	  free(temp);
     	  
}
}
void display()
{
	 if(head == NULL)
      printf("\nStack is Empty\n");
   else
   {
       NODE *temp = head;
      while(temp->next != NULL)
	  {
	 printf("%d",temp->data);
	 temp = temp -> next;
      }
}
}





int main()
     {
         int flag ;
         int choice ;
         
         flag = 1 ;
         
         while (flag)
         {
              choice = DisplayMenu() ;
              switch(choice)
              {  
                 case 1 :
                 { 
                     push();
                      break ;
                 }
                 case 2:
                 {
                     pop();
                      break ;
                 }
                 case 3:
                 {
                 	   display();
                      break ;
                 }
                 
                 case 4:
                 {
                      flag=0;
                 	   break;
 				        }
                 default:
                 {
                     
                      break ;
                 }
              }
         }
     }
