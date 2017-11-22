#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[200];
	int array1[100];
	int array2[100];
    int flag;
    int a;
	int i;
	int b;
	int largest;
	int smallest;
	FILE *ptr;
	ptr = fopen("num.txt","r"); 
    if (ptr == NULL) 
           {
               printf("error in opening the file\n");
               exit(0);
           }
   else
      {
           for(i=0;i<200;i++)
           fscanf(ptr, "%d", &array[i]);
	  }
   fclose(ptr);
   
   
   //To find the largest number in the array
   largest=array[0];
   flag=0;
   for(flag=0; flag<200;flag++)
      {
    	if (largest< array[0+flag])
          {
    		largest=array[flag];
        	flag++;
    	
	      }
	
      }
	         printf("\n the largest number is %d",largest);
 


//To find the smallest in the array
     smallest=array[0];
     flag=0;
     for(flag=0; flag<200;flag++)
      {
	    if (smallest > array[0+flag])
         {
    	   smallest=array[flag];
    	   flag++;
	     }
      }
      	printf("\n the smallest number is %d",smallest);
	
	
	
	
	//To find the multiple of 3
	flag=0;
	a=array[flag];
	int idx=0;
	int val;
	
	  for(flag=0; flag<200;flag++)
	   {	
	      a=array[flag];
	    	if (a%3==0)
		     {
			    array1[idx]=a;
		     	idx++;
			    flag++;
			
		     }
		else
		    {
			   flag++;
		    }
       }
		    printf("\n The multiples of 3 are\n");
	         for(val=0; val<idx; val++)
            	{
	               printf ("%d ",array1[val]);
                }
		
		val=0;
		a=0;
		
		
		
		//To find the multiples of 7
	flag=0;
    int Idx=0;
	int Val;
	
    for(flag=0; flag<200;flag++)
     	{
			  a=array[flag];
		      if (a%7==0)
		        {
			        array2[Idx]=a;
			        Idx++;
			        flag++;
			
		        }
		else
		      {
			     flag++;
		      }
       }     
             printf("\n the multiples of 7 are\n");
	    	for(Val=0; Val<Idx; Val++) 
	
		  printf (" %d ",array2[Val]);
		
		
//ascending order 
   
   int j,k,temp,l;
   for (j = 0; j < 200; ++j)
    {
       for (k = j + 1; k < 200; ++k)
        {
          if (array[j] > array[k])
           {
              temp = array[j];
              array[j] = array[k];
              array[k] = temp;
           }
       } 
   }
       printf("\n Numbers in ascending order:\n");
       for (l = 0; l < 200; ++l)
        printf("%d ", array[l]);
		
		  
	   
	   
//descending order
    
	int j1,k1,temp1,l1;
    for (j1 = 0; j1 < 200; ++j1)
   {
       for (k1 = j1 + 1; k1 < 200; ++k1)
         {
           if (array[j1] < array[k1])
            {
              temp1 = array[j1];
              array[j1] = array[k1];
              array[k1] = temp1;
           }
        } 
   }
     printf("\n Numbers in descending order:\n");
     for (l1 = 0; l1 < 200; ++l1)
     printf("%d ", array[l1]);


	return 0;
}
