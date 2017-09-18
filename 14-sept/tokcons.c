#include<stdio.h>
#include <string.h>
main()
{
	char array[100],array1[100],array2[100];
	int i,j,k=0;
	printf("enter the string =");
	i=0;
	j=0;
	scanf("%s",&array);
	for (i = 0; array[i] != '\0'; i++)
    {
    	 if(array[i]!='r')
    	 {
		 	array1[j]=array[i];
       		j++;
   		 }
   	     else
   	     {
   	   		array2[k]=array[i];
		 }
	}
	array2[j]='\0';
	
    printf("\n the content of the array is %s",array);
    
    printf("\n the content of the array1 is %s",array1);
   printf("\n the content of the array2 is %s",array2);    
}
