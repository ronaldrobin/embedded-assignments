#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node 
    {
       int data ;
       struct node *left ;
       struct node *right ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;
   
   
   DisplayMenu()
  {
  
  
  }
   CreateList()
   {
   	
   }
AddNode()
{
	
   }   
   DeleteNode()
   {
   	
   }
   DisplayForward()
   {
   	
   }
   DisplayRev()
   {
   	
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
                    DisplayForward() ;
                    break ;
                }
                case 5:
                {
                    DisplayRev() ;
                    break ;
                }
                case 6:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 7:
                {
                    SearchList();
                    break ;
                }
                case 8:
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
