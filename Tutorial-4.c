#include<stdio.h>
func1()
{
    static int a=5;
    a++;
    return(a);
}
main()
{
    int a;
    for (int i = 0; i < 10; i++)
    {
    a = func1();
    printf("\n Value of a is: %d",a);
    }
    
    
}