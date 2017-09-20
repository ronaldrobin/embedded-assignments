 /* global variables */
 #include<stdio.h>
 #include<stdlib.h>
 #define size 10
   int queue[size]; 
   int head = 0 ;
   int tail = 0;
   
   int AddQueue(int element)
   {
   	int idx;
          if((head==0 && tail==size-1)||(head>0&&tail==head-1))      /* First check Queue is full or not */
      														/* If queue is full print the message queue is full and return */
      														/* else add the element to queue and increment the tail */
			{
				printf("\n queue is full");
			}
			else
			printf("\n enter the data");
			scanf("%d\n",&element);
			{	if(tail==size-1&&head>0)
		
		       tail=0;
		       queue[tail]=element;
		       tail++;
		       printf("the contents of queue is \n");
		       for(idx=head; idx<size; idx++)
		       printf("%d",queue[idx]);
		    
			
		
			}                                               
   }
   
   int DeleteQueue()
   { 
       int idx;
      if(tail==head)
    	{
    		printf("\n queue is empty");
    		exit(0);
		}
		else
		{  
		printf("%d removed from queue \n",queue[head]);
		head++;
		printf("the contents of queue is \n");
		for(idx=head; idx<size; idx++)
		printf("%d",queue[idx]);
		}                                           /* First check Queue is empty or not */
                                                    /* if empty print a message saying queue is empty and return */
                                                     /* Else remove the element and increment the head */
   }
  
   
   main()
   {
       int flag ;
       int choice ; /*menu choice */
       int data ;
       flag = 1 ;
      
       while(flag)
       {
           printf("1.Add \n");
           printf("2.Delete \n");
           printf("3.exit\n");
           scanf("%d", &choice);
           switch(choice)
           {
              case 1 : {
                          
                          AddQueue(data);
                          break ;
                       }
              case 2 : {
                          data = DeleteQueue();
                        
                          break;
                        }
    
            case 3:    {
                          flag = 0 ;
                           break ;
                       }
            default:   {
                        exit(0); 
                       }
           }
       }
   }
