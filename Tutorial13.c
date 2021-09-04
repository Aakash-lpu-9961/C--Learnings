#include<stdio.h>
#include<stdlib.h>
main()
{
    int n, *ptr;
    printf("\n Enter the value for n:");
    scanf("\n %d",&n);
    ptr=(int*)calloc(n,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\n Enter the value of %d:",(i+1));
        scanf("\n %d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n The value of %d: %d",(i+1),ptr[i]);
    }

    printf("\n Enter the new value for n:");
    scanf("\n %d",&n);
    ptr=(int*)realloc(ptr, n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\n Enter the value of %d:",(i+1));
        scanf("\n %d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n The value of %d: %d",(i+1),ptr[i]);
    }
    
}



