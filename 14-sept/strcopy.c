#include<stdio.h>
#include <string.h>
main()
{
	char array[100],array1[100],temp;
	int i,;
	printf("enter the string =");
	i=0;
	temp=0;
	scanf("%s",&array);
	for (i = 0; array[i] != '\0'; i++)
    {
        array1[i]=array[i];
        
    }
    printf("\n the content of the array is %s",array);
    
    printf("\n the content of the array1 is %s",array1);
    
}
