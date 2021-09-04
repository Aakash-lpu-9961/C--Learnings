#include <stdio.h>
main()
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[15] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20,21,22,23,24};
    int *p = &a[3];
    int *q = &b[8];
    /*printf("\n Value is:%d",2+3);
    /*printf("\n New Value is:%d",a[5]);*/
    printf("\n Value is:%d", p - q);
    printf("\n Value is:%d", q - p);
    printf("\n value of tenth position of an array q is: %d",b[10]);
    printf("\n value of tenth position of an array q is: %d",*(q+2));
    printf("\n Value is:%d", *(q + 2));
    printf("\n Value is:%d", *(q - 2));
}
