#include<stdio.h>
main()
{
    FILE *ptr=NULL;
    char str[64]="This is my program and i have created it in a efficient manner";
    ptr =fopen("Tutorial25.txt","r++");
    fprintf(ptr,"%s",str);
    printf("\n This file has: %s\n",str);
    fputc('H',ptr);
    
    fclose(ptr);
}