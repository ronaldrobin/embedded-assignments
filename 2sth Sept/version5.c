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
	
	//for()
	 //struct node* newnode =(struct node*) malloc(sizeof(struct node));
    printf("\n enter the value");
    scanf("%d",&val);
	head->data = val;
	 head->next= NULL;
	j=1;

	  }	  
	  
AddNode()
{
	 int pos=0,i;
	 NODE *newnode,*current,*temp,*temp1;
	 int new_data;
	 
	 newnode =(struct node*) malloc(sizeof(struct node));
	 if(newnode==NULL)
	 {
	 	printf("\n memory allocation failed");
	 }
	 st :
    printf("nEnter the position : ");
    scanf("%d",&pos);

   
	 if(head==NULL)
       {
       head=newnode;
       current=newnode;
       }
    else
       {
       temp = head;
             for(i=1;i< pos-1;i++)
             {
             temp = temp->next;
             }
       temp1=temp->next;
       temp->next = newnode;
       newnode->next=temp1;
       }
}
	    
	  
 void DeleteNode()
{
	int key;
	struct node *temp=head;
	struct node *temp1;
	printf("\n enter the node to be deleted");
	scanf("%d",&key);
	if(head->next==NULL)
	{
		printf("\n the list is empty \n ");
		while((temp->next != NULL) && (temp->data != key))
		{
			temp1 = temp;
			temp = temp->next;
		}
		if(temp->data == key)
		{
			temp1->next = temp->next;
			free(temp);
	}
	
	  }	 
}
 void DisplayList()
{
	struct node *n=head;

	if(j==0 || head==NULL)
	{
		printf("\n The List is empty. ");
	}

  while (n != NULL)
  {
     printf(" %d ", n->data);
     n = n->next;
  }
}
	  
	   
	  
void DeleteList()
{
	struct node *temp;

 	if(head==NULL)
 	{
 		printf("\n the list is empty");
	 }
 	
	  while (head != NULL)
    {
    	    head ==temp;
         temp->data == 0;
	  	  free(temp);
	     head = head->next;
	  }
	  
   
}
void SearchList()
 {
 	int key;
 	printf("\n enter the key element to search");
 	scanf("%d",&key);
 	
	  while (head != NULL)
    {
        if (head->data == key)
        {
            printf("key found\n");
            
        }
        head = head->next;
    }
    printf("Key not found\n");
 	
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
    
