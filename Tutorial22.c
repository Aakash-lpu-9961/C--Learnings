#include<stdio.h>
#include<stdlib.h>
main()
{
    int *ptr;
    int n;
    printf("\n Enter the value of n for allocating memory dynamically:");
    scanf("\n %d",&n);
    printf("\n You entered: %d",n);
    ptr = (int *)calloc(n,sizeof(int));  //returns void pointer //
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Value-%d : ",(i+1));
        scanf("\n %d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n Entered Value -%d : %d ",(i+1), *(int *)(ptr+i));
        //scanf("\n %d",&ptr[i]);//
    }
    //free(ptr);
    check:printf("\n Enter the new value of n for allocating memory dynamically:");
    scanf("\n %d",&n);
    printf("\n You entered: %d",n);
    ptr = (int *)realloc(ptr,n);
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Value-%d : ",(i+1));
        scanf("\n %d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n Entered Value -%d : %d ",(i+1), *(int *)(ptr+i));
        //scanf("\n %d",&ptr[i]);//
    }
    free(ptr);
    goto check ;
}