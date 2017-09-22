#include<stdio.h>
 #include <stdlib.h>
 #include<errno.h>
 main()
 {
   FILE *inputptr;
   int flag;
   int value;
   int value1;
   int array[1000];
   int idx;
   inputptr=fopen("random.txt","r");
    if (inputptr == NULL) 
   {
     printf("unable to open the file");
     printf("%s\n",strerror(errno));
     exit(0);
   }
         idx=0;
   		flag=1;
   
 while(flag)
 	{
 	    value1=fscanf(inputptr,"%d",&value);
 	    if(value1==EOF)
 	    {
 		flag=0;
 	    }
 	    else
 	    {
 	    	array[idx]=value;
 		printf("%d\n",array[idx]);
 		idx++;
 	    }
 	}
 
 	 
     int position;              // position of the element in the array.
     int element;              // element to be searched in the array.
     int first,last,middle;
 int *ptr;
     FILE *htmlptr;
     htmlptr= fopen("bin.html","w");
 	printf("enter the element to find \n");
 	scanf("%d",&element);
     
     fprintf(htmlptr,"%s","<html>");
     first=0;
     last=idx-1;
     middle=(first+last)/2 ;
     
     while(first<last)
     {
     	ptr=array;
		middle=last+(first-last)/2;
		ptr+=middle;
		
		if(*ptr<element)
		last=middle+1;
		
		else if(*ptr>element)
		first=middle-1;
		
		else if(*ptr==element)
		{
			fprintf(inputptr,"<H1><b><center>%d found at location %d</center></b></H1>",element,middle+1);
			flag=0;
		}
 		
 	if(first>last)
 	{
 		fprintf(htmlptr,"%s""<p>element not found</p>\n");
 		}	
 }
 fprintf(htmlptr,"%s","</html>");
 fclose(htmlptr);
 }
