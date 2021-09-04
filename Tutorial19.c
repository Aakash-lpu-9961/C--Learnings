#include<stdio.h>
#include<string.h>
main()
{
        char str[7]="HELLO";
        void *ptr;
        ptr= str;
        for(int i=0;str[i]!=NULL;i++)
        {
                printf("\n str[%d] = %c",i,*(char *)(ptr+i));
                printf(" \t  &str[%d] = %p",i, (ptr+i));
        }
        *(char *)(ptr+2)='A';
        printf("\n str:%s",str);
        printf("\t \t  str:%p",str);
        return(0);
}
