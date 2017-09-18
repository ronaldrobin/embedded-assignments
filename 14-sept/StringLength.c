#include<stdio.h>
#include <string.h>
main()
{
	char array[100];
	int idx,length;
	printf("enter the string =");
	idx=0;
	length=0;
	scanf("%s",&array[idx]);
	for (idx = 0; array[idx] != '\0'; idx++)
    {
        length++;
    }
    printf("the length of the string is %d",length);
}
