#include<stdio.h>
main()
{
    FILE *ptr=NULL;
    char str[64];
    ptr =fopen("Tutorial20.txt","r");
    fscanf(ptr,"%s",str);
    printf("\n This file has: %s\n",str);
    fclose(ptr);
}