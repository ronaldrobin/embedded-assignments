#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;
    int j=0;  
  DisplayMenu()
  {
  	int i=0;
  	
	printf("\n 1. Create list");
  	printf("\n 2. Add Node");
  	printf("\n 3. Delete Node");
  	printf("\n 4. Display list");
  	printf("\n 5. Delete list");
  	printf("\n 6. Search List");
	 scanf(" %d ",&i);
	 return i;
	  }
CreateList()
{
	int val=0;
	head  = (struct node*) malloc (sizeof(struct node));
    printf("\n enter the value");
    scanf("%d",&val);
	head->data = val;
	 head->next= NULL;
	j=1;

	  }	  
	  
AddNode()
{
	  }	  
	  
DeleteNode()
{
	  }	  
 void DisplayList()
{
	struct node *n=head;

	if(j==0)
	{
		printf("\n The List is empty. ");
	}

  while (n != NULL)
  {
     printf(" %d ", n->data);
     n = n->next;
  }
}
	  
	   
	  
DeleteList()
{
	  }	  
	      
 SearchList()
 {
 	
 }
 
 
 
 
 
 
    int main()
    {
        int flag ;
        int choice ;
        flag = 1 ;
        
        while (flag ==1)
        {
             choice = DisplayMenu() ;
             switch(choice)
             {  case 1 :
                { 
                     CreateList() ;
                     break ;
                }
                case 2:
                {
                     AddNode();
                     break ;
                }
                case 3:
                {
                     DeleteNode();
                     break ;
                }
                case 4:
                {
                    DisplayList(head) ;
                    break ;
                }
                case 5:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 6:
                {
                    SearchList();
                    break ;
                }
                case 7:
                {
                    flag = 0 ;
                    break ;
                }
                default:
                {
                   break ;
                }
             }
        }
    }
